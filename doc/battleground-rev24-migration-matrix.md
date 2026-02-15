# Battleground EasyCore rev24 migration matrix

This document decomposes `extended_bg_v3_rev24` into feature units and tracks migration status against the current rAthena tree.

## Feature decomposition and current mapping

| Feature unit | rev24 intent | Current mapping | Status |
|---|---|---|---|
| Queue UX | Better queue feedback while waiting | `src/map/battleground.cpp` + `src/map/battleground.hpp` now add `QueueAnnounce` and periodic occupancy messaging. | Implemented |
| Anti-abuse checks | Prevent queue stacking abuse | `src/map/battleground.cpp` adds per-queue IP duplication blocking; configurable with `AllowSameIP`. | Implemented |
| NPC flow modernization | Consolidated recruiter/menu flow for extended modes | `npc/re/battleground/bg_common.txt` adds an Extended recruiter that routes queue joins and explains migration state. | Implemented |
| Rewards baseline | Basic participation reward loop | `npc/re/battleground/bg_common.txt` adds once-per-day reward packet for migration compatibility. | Implemented |
| Stats persistence scaffolding | char_bg / char_wstats availability and safe startup behavior | `src/char/char.cpp` + `src/char/char_mapif.cpp` detect schema availability and explicitly gate stat-heavy behavior with warnings. | Implemented (gated) |
| Extended stats ingestion | Full rev24 combat stat writeback (damage/heal/item usage buckets) | Not transplanted line-by-line; requires larger `mmo_charstatus` extension and map<->char contract design. | Deferred |
| Extended mode scripts | Full Tierra/Flavius/Rush/Conquest script ports from legacy package | Not ported wholesale to avoid API drift and legacy assumptions. `db/import-tmpl/battleground_db_ex.yml` provides curated mode entries. | Deferred |
| Legacy fame ladder changes | BG/WoE fame list expansion in char/mapif packet contracts | Not migrated to keep current packet layouts and avoid compatibility regressions. | Intentionally dropped |

## SQL migration coverage

The required rev24 stat tables/columns for the gated codepaths are provided in:

- `sql-files/upgrades/upgrade_20260215_bg_rev24.sql`

Scope covered:
- `char_bg` baseline identity/rating columns (`win`, `lost`, `tie`, `deserter`, `score`, `points`, `rank_points`, `rank_games`).
- `char_wstats` baseline scoring columns (`score`, `points`).

If these are absent at boot, the server now keeps running and disables rev24 stat persistence paths with explicit warnings.

## Deployment references

- SQL + import + NPC rollout: `doc/battleground-rev24-deployment.md`
- Client files release manifest: `doc/battleground-rev24-client-bundle-manifest.md`
- Parity tracking checklist: `doc/battleground-rev24-parity-checklist.md`
