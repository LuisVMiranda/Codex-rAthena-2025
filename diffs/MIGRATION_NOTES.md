# Diff Migration Notes (2025 rebase)

This document records old→new path/format mappings used while rebasing legacy diffs.

## 1) Sys-VipStatusIcon
Source patch: `diffs/Sys-VipStatusIcon/0001-System-Vip-Status-Icon.patch`

- **Old path in patch:** `db/import/status.yml`
- **Current tracked customization path:** `db/import-tmpl/status.yml`
- **Applied migration:** VIP status definition (`VIPSTATE` / `EFST_VIPSTATE`) was added to `db/import-tmpl/status.yml`.

Rationale: `db/status.yml` still imports `db/import/status.yml` at runtime, but the repository-tracked template location for custom DB entries is `db/import-tmpl/*.yml`.

## 2) Sonic Blow and Arrow Vulcan v3
Source patch: `diffs/SonicBlow-ArrowVulcan/Sonic Blow and Arrow Vulcan v3.patch`

- **Old path in patch:** `db/skill_animation.txt` (legacy TXT DB)
- **Current DB format:** YAML skill definitions via `db/*/skill_db.yml` with overrides in `db/import-tmpl/skill_db.yml`
- **Mapping used:**
  - `AS_SONICBLOW` count `8` → `Hit: Multi_Hit`, `HitCount: -8`
  - `CG_ARROWVULCAN` count `9` → `Hit: Multi_Hit`, `HitCount: -9`
- **Applied migration:** Added those overrides in `db/import-tmpl/skill_db.yml`.

Note: legacy `skill_animation.txt` fields (`Start`, `Interval`, `Speed`, `Spin`) have no direct upstream DB consumer in current `src/map/skill*`; only multi-hit semantics map cleanly to current skill DB.

## 3) atcommands import location
Source patch family: patches that add `conf/import/atcommands.yml` (e.g. Hidepet)

- **Current upstream layout:**
  - Base command DB: `conf/atcommands.yml`
  - Runtime import hook: `Footer -> Imports -> conf/import/atcommands.yml` in `conf/atcommands.yml`
  - Tracked template for custom imports: `conf/import-tmpl/atcommands.yml`
- **Applied migration:** merged legacy custom commands (`hidepet`, `hidepetall`) into `conf/import-tmpl/atcommands.yml`.

This keeps upstream defaults in `conf/atcommands.yml` intact and preserves custom commands in import templates.
