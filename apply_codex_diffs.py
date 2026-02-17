#!/usr/bin/env python3
"""Apply Codex diff packages and generate a troubleshooting report.

Usage:
  python3 apply_codex_diffs.py [--repo PATH] [--diffs-dir "Codex diffs"] [--dry-run]

Behavior:
- Scans Codex diff folders/patches.
- Applies each patch with git apply (check first, then apply).
- Writes a detailed report with stdout/stderr and status.
- Renames successfully-applied diff folders to start with "[OK] ".
"""
from __future__ import annotations

import argparse
import datetime as dt
import subprocess
from pathlib import Path
from dataclasses import dataclass


@dataclass
class Result:
    name: str
    patch: Path
    status: str
    message: str


def run(cmd: list[str], cwd: Path) -> subprocess.CompletedProcess:
    return subprocess.run(cmd, cwd=str(cwd), text=True, capture_output=True)


def safe_name(folder: Path) -> str:
    return folder.name


def rename_ok_folder(folder: Path) -> str:
    name = folder.name
    if name.startswith("[OK] "):
        return name
    new_name = f"[OK] {name}"
    target = folder.with_name(new_name)
    if target.exists():
        return name
    folder.rename(target)
    return target.name


def discover_patches(diffs_dir: Path) -> list[tuple[str, Path, Path | None]]:
    entries: list[tuple[str, Path, Path | None]] = []
    seen_top = set()

    if not diffs_dir.exists():
        return entries

    for folder in sorted([p for p in diffs_dir.iterdir() if p.is_dir()]):
        patches = sorted(folder.glob("*.patch"))
        if not patches:
            continue
        patch = patches[0]
        entries.append((folder.name, patch, folder))
        top_equiv = diffs_dir / f"{folder.name}.patch"
        if top_equiv.exists():
            seen_top.add(top_equiv.resolve())

    for patch in sorted(diffs_dir.glob("*.patch")):
        if patch.resolve() in seen_top:
            continue
        entries.append((patch.stem, patch, None))

    return entries


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", default=".")
    ap.add_argument("--diffs-dir", default="Codex diffs")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    repo = Path(args.repo).resolve()
    diffs_dir = (repo / args.diffs_dir).resolve()
    report = repo / "CODEX_DIFFS_APPLY_REPORT.md"

    items = discover_patches(diffs_dir)
    results: list[Result] = []

    for name, patch, folder in items:
        check = run(["git", "apply", "--check", str(patch)], repo)
        if check.returncode != 0:
            results.append(Result(name, patch, "FAILED", (check.stderr or check.stdout).strip()))
            continue

        if args.dry_run:
            results.append(Result(name, patch, "DRY-RUN", "Patch check passed."))
            continue

        apply = run(["git", "apply", "--reject", "--whitespace=nowarn", str(patch)], repo)
        if apply.returncode != 0:
            msg = ((apply.stderr or "") + "\n" + (apply.stdout or "")).strip()
            results.append(Result(name, patch, "FAILED", msg))
            continue

        folder_note = ""
        if folder is not None:
            try:
                new_name = rename_ok_folder(folder)
                if new_name != folder.name:
                    folder_note = f" Folder renamed to: {new_name}."
            except Exception as exc:
                folder_note = f" Folder rename skipped ({exc})."

        results.append(Result(name, patch, "APPLIED", f"Patch applied successfully.{folder_note}"))

    now = dt.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    lines = [
        "# Codex Diff Apply Report",
        "",
        f"Generated: {now}",
        f"Repository: `{repo}`",
        f"Diff source: `{diffs_dir}`",
        f"Mode: `{'dry-run' if args.dry_run else 'apply'}`",
        "",
        "| Diff | Patch | Status | Message |",
        "|---|---|---|---|",
    ]

    if not results:
        lines.append("| (none) | - | WARNING | No patch files found. |")

    for r in results:
        msg = r.message.replace("\n", "<br>").replace("|", "\\|")
        lines.append(f"| {r.name} | `{r.patch.relative_to(repo)}` | **{r.status}** | {msg} |")

    lines.append("")
    lines.append("## Summary")
    total = len(results)
    applied = sum(1 for r in results if r.status == "APPLIED")
    failed = sum(1 for r in results if r.status == "FAILED")
    dry = sum(1 for r in results if r.status == "DRY-RUN")
    lines.append(f"- Total processed: **{total}**")
    lines.append(f"- Applied: **{applied}**")
    lines.append(f"- Failed: **{failed}**")
    lines.append(f"- Dry-run passed: **{dry}**")

    report.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"Report written: {report}")

    return 0 if failed == 0 else 1


if __name__ == "__main__":
    raise SystemExit(main())
