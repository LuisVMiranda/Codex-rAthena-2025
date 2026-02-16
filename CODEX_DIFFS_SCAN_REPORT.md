# Codex diffs Scan Report

Generated: 2026-02-16

## 1) Packaging/folder structure scan

All top-level patch files in `Codex diffs/` now also have a same-name folder containing:
- a copy of the patch (`<Name>.patch`)
- a minimal `README.md`

This makes every diff shippable as either a single patch file or a named package folder.

## 2) Implementation status snapshot

| Diff | Source integration status | Notes |
|---|---|---|
| ExtendedVending-v4 [OK] | Implemented (active runtime code) | `src/map/vending.cpp`, import DB and codex patch maintained. |
| Battleground-EasyCore-21-24 [OK] | Implemented/compat layer | Buildins + script shims present; still requires live gameplay validation across all modes. |
| PartyBuff+ShowPartySP [OK] | Implemented (ongoing stabilization) | Party HP/SP packet paths and commands present; this report includes further rollback-to-stable edits. |
| MobEleView [OK] | Implemented | Mob element/race info now shown in both show_mob_info and title-based paths. |
| MonsterChampion [OK] | Implemented | Champion labels/messages restored with `getmessage`. |
| Overkill [OK] | Implemented | hitkill tracking + drop multiplier + effect hook present. |
| Hidepet [OK] | Implemented | Atcommand and visibility logic present. |
| SharedZeny [OK] | Implemented | Account-level zeny wiring present in char/map flow. |
| ShowRecovery [OK] | Implemented | Atcommand + display path active. |
| WeaponShadow [OK] | Implemented | Costume weapon look data/runtime present. |
| fakeIcon [OK] | Implemented | script buildin present. |
| Sys-VipStatusIcon [OK] | Partial | Server-side status pieces present; client/data rollout must match for full visual parity. |
| SonicBlow-ArrowVulcan [OK] | Partial | Base skills exist; full legacy parity depends on DB/client balancing validation. |
| MVP-Spawn-Shakto [OK] | Not fully verified | Needs scripted runtime verification against event flow. |
| Mapflag-NoRess [OK] | Not fully verified | Needs mapflag behavior checks in live map configs. |
| Wordboss-cutins [OK] | Not fully verified | Requires content/script + client assets E2E validation. |

## 3) Strategy for not-fully-implemented/verified diffs

1. **Automated parse/load gate**
   - Start map-server in CI-like mode with a prepared DB and import config.
   - Fail build on script parse warnings for each diff package.

2. **Per-diff runtime checklist**
   - Add a small checklist file under each package folder (spawn/use command/expected packet/UI).

3. **Client-asset parity pass**
   - Validate `.lub/.str/.act/.spr/.bmp` assets in each package against expected client data roots.

4. **Patch drift prevention**
   - Regenerate package patch files from live source diffs at release cut to avoid stale/legacy hunks.
