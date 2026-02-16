# DIFFS Implementation Report (Single Source of Truth)

Last updated: 2026-02-15

## Status legend
- **Implemented**: Feature behavior is present and wired in runtime/server flow.
- **Partially Implemented**: Some assets/config/code are present, but full legacy parity or runtime wiring is incomplete.
- **Not Implemented**: Legacy diff functionality is not ported to current code paths.

## Legacy systems matrix

| Legacy system | Status | Origin | Concrete evidence | Notes |
|---|---|---|---|---|
| HidePet (`@hidepet`, `@hidepetall`) | **Implemented** | **Ported from local diff** | `src/map/atcommand.cpp` (`ACMD_FUNC(hidepet)` + command registration), `src/map/clif.cpp` (pet visibility checks), `conf/atcommands.yml` (command help/aliases), `conf/import-tmpl/atcommands.yml` (migration marker) | Full toggle behavior exists and is persisted in player state. |
| Party Buff display (`@partybuff` / `@spb`) | **Implemented** | **Ported from local diff** | `src/map/atcommand.cpp` (`ACMD_FUNC(spbar)`, `ACMD_FUNC(partybuff)`), `src/map/clif.cpp` (`sd->state.spb` gate), `src/map/status.cpp` (party buff refresh), `conf/msg_conf/map_msg.conf` (messages 1071-1073) | Runtime + user messaging path exists. |
| Party SP bar (`@spbar`) | **Implemented** | **Ported from local diff** | `src/map/atcommand.cpp` (`ACMD_FUNC(spbar)`), `src/map/clif.cpp` (`target == SELF && sd->state.spb`) | Treated as same subsystem as Party Buff toggle. |
| Shared Zeny (account-level) | **Implemented** | **Ported from local diff** | `src/char/char.cpp` (login-table zeny reads/writes, startup migration check for `login.zeny`) | Char-server persists/loads zeny through `login` table account scope. |
| Costume Weapon Shadow / Costume weapon look | **Implemented** | **Ported from local diff** | `src/common/mmo.hpp` (`costume_weapon` in status struct), `src/map/pc.cpp` (equip/unequip updates + `LOOK_WEAPON` change) | Data model + equip runtime wiring are in place. |
| ShowRecovery | **Implemented** | **Ported from local diff** | `src/map/atcommand.cpp` (`ACMD_FUNC(showrecovery)`), `src/map/pc.cpp` (`if (sd->showrecovery)` path), `src/map/pc.hpp` (`bool showrecovery`) | Runtime toggle is active. |
| fakeIcon script command | **Implemented** | **Ported from local diff** | `src/map/script.cpp` (`BUILDIN_FUNC(fakeIcon)` + `BUILDIN_DEF(fakeIcon,"iiii")`) | Script API is available in buildins table. |
| Sonic Blow / Arrow Vulcan rewrite | **Partially Implemented** | **Split: core upstream + local diff port** | Core skills exist upstream (`db/re/skill_db.yml`, `db/pre-re/skill_db.yml`), while local diff hit-count rewrite exists only as import template override in `db/import-tmpl/skill_db.yml` | Base skills are upstream; legacy multi-hit rewrite is staged but not fully validated for parity. |
| VIP icon runtime wiring | **Partially Implemented** | **Split: core upstream + local diff port** | Core VIP status runtime exists (`src/map/clif.cpp` uses `SC_VIPSTATE`; constants in `src/map/status.hpp` / `src/map/script_constants.hpp`), local diff addition is template-only in `db/import-tmpl/status.yml` | Template instructs copying to active DB; full deployment depends on active import DB + client data rollout. |
| Battleground EasyCore rev21-24 (full parity) | **Partially Implemented** | **Split: core upstream + local diff port** | Core battleground system exists (`npc/battleground/bg_common.txt`, `db/import-tmpl/battleground_db.yml`), legacy package remains external in `diffs/Battleground-EasyCore-21-24/` | Upstream BG is present, but full rev24 custom parity is not fully ported. |
| ExtendedVending v4 | **Not Implemented** | **Local diff not ported** | Only legacy diff artifact exists at `diffs/ExtendedVending-v4/Server Files/fe4234cd39e341985b1006a371acf9119a3ae248.diff`; no mapped runtime port markers in `src/` | Requires manual re-port to current vending internals. |

## Upstream vs local-diff split (quick view)

### Implemented in core upstream (base system exists)
- VIP runtime/status framework (`SC_VIPSTATE`, script constants, status handling).
- Battleground base framework/scripts.
- Baseline Sonic Blow / Arrow Vulcan skill presence in stock DBs.

### Ported from local diffs in this repository
- HidePet command family (`@hidepet`, `@hidepetall`).
- Party Buff / SP Bar command family (`@partybuff`, `@spb`, `@spbar`).
- Shared Zeny account storage wiring.
- Costume weapon look field/runtime handling.
- ShowRecovery command path.
- fakeIcon script buildin.
- Import-template overlays for Sonic/Arrow hit-count rewrite and VIP icon status entry.

## Remaining gap list (actionable only)
1. **ExtendedVending** (full feature port still missing).
2. **Sonic/ArrowVulcan rewrite** (finish/validate full behavior parity beyond template-only DB override).
3. **VIP icon runtime wiring** (ensure active DB/client deployment path is complete in runtime environments).
4. **Full BG rev24 parity** (complete port of EasyCore rev24 custom systems beyond upstream baseline).

## Build/Test Validation After Renames + Codex diffs

Validation run performed in this workspace after the rename/diff integration pass.

### Prerequisite remediation for missing custom headers
- Initial build failed at `src/config/core.hpp` due to missing `custom/defines_pre.hpp`.
- Added local scaffold headers under `src/custom/` to satisfy repository-expected extension points:
  - `defines_pre.hpp`, `defines_post.hpp`
  - `battle_config_struct.inc`, `battle_config_init.inc`
  - `atcommand.inc`, `atcommand_def.inc`
  - `script.inc`, `script_def.inc`
- Re-ran build immediately after scaffolding.

### Command results

| Command | Result | Concise excerpt | Impacted module(s) |
|---|---|---|---|
| `cmake -S . -B build` | **PASS** | Configuration completed, build files generated in `build/`. | Global CMake configuration |
| `cmake --build build -j$(nproc)` (attempt 1) | **FAIL** | `fatal error: custom/defines_pre.hpp: No such file or directory` from `src/common/core.cpp` include chain. | `src/config/core.hpp`, `src/common` |
| `cmake --build build -j$(nproc)` (attempt 2, after scaffold) | **FAIL** | Advanced past custom-header errors, then failed in map compile: `src/map/clif.cpp: error: 'class map_session_data' has no member named 'bl'` (`clif_skill_animation_start`). | `src/map/clif.cpp` / `map-server` target |
| `ctest --test-dir build --output-on-failure` | **PASS** (no tests) | `No tests were found!!!` | Test harness discovery |
| `timeout 45s ./login-server --run-once` | **FAIL** (env/deps) | Missing import config files (`conf/import/*.txt`) and MySQL connect failure (`127.0.0.1:3306`). | `login-server` runtime bootstrap |
| `timeout 45s ./char-server --run-once` | **FAIL** (env/deps) | Missing import config files and MySQL connect failure (`127.0.0.1:3306`). | `char-server` runtime bootstrap |
| `timeout 45s ./web-server --run-once` | **FAIL** (env/deps) | Missing import config files and MySQL connect failure (`127.0.0.1:3306`). | `web-server` runtime bootstrap |

### Current blocking issue summary
- Build blocker is now a compile-time regression in `src/map/clif.cpp` (`map_session_data::bl` member usage) after custom-header scaffolding unblocked earlier failures.
- Runtime `--run-once` checks for built servers additionally require:
  1. populated `conf/import/*` configuration files, and
  2. reachable MySQL instance matching `conf/inter_athena.conf` / server conf credentials.

## Validation Update: Extended vending/SPB/showrecovery/getmessage adjustments

### Command results

| Command | Result | Concise excerpt | Impacted module(s) |
|---|---|---|---|
| `cmake -S . -B build` | **PASS** | Configure/generate completed successfully. | Global CMake configuration |
| `cmake --build build -j$(nproc)` (first pass) | **FAIL** | `src/map/vending.cpp: error: 'Battle_Config' has no member named 'item_zeny'` while validating the first extended-vending port attempt. | `src/map/vending.cpp` / `map-server` target |
| `cmake --build build --target map-server -j4` (after fix) | **PASS** | `Built target map-server` (vending module linked successfully after removing invalid config-field assumptions). | `src/map/vending.cpp`, `src/map/clif.cpp`, `src/map/intif.cpp`, `src/map/skills/merchant/skill_vending.cpp` |
| `cmake --build build -j$(nproc)` (final pass) | **PASS** | Full tree completed, including `map-server`. | Full server/tool targets |
| `ctest --test-dir build --output-on-failure` | **PASS** (no tests) | `No tests were found!!!` | Test harness discovery |
| `timeout 30s ./map-server --run-once` | **FAIL** (env/deps) | Missing `conf/import/*`, missing custom NPC script files, and MySQL unavailable at `127.0.0.1:3306`. | `map-server` runtime bootstrap |

### Notes
- Extended vending diagnostics were iterated in two passes: first compile failure identified invalid battle-config references from legacy assumptions, then reworked to current-tree-compatible currency selection storage and purchase flow.
- `src/custom/*` scaffold headers/includes remain present and are now prepared to be versioned for deterministic builds in this branch.

## Follow-up: ExtendedVending DB/prefix + ShowPartySP/SPB diagnostics

### Findings and implementation notes
- Extended Vending currency menu is now constrained to currencies listed in `db/import/item_db_extended_vending.yml` (loaded by a dedicated runtime DB in `vending.cpp`).
- Added `StorePrefix` support per currency entry; prefix is injected into shop title on vending-open (example: `[Z] My Shop`).
- `@reloaditemdb` now reloads both the normal item DB and the extended-vending currency DB (`extended_vending_db.reload()`).
- Added import templates and tracked import files for:
  - `db/import/item_db_extended_vending.yml`
  - `db/import/item_db_bg.yml`
- SPB stale-message issue on buff expiration was traced to update ordering around status-end handling; party refresh now runs before the status-display removal messaging path.
- ShowPartySP limitation diagnosis: in this source tree, party SP fields are available only in packet `ZC_NOTIFY_HP_TO_GROUPM` variant `0x0bab` (`PACKETVER_ZERO >= 20210504`). For non-ZERO packetvers, the packet has HP-only fields, so blue SP bars cannot be rendered by stock client protocol.

### Command results

| Command | Result | Concise excerpt | Impacted module(s) |
|---|---|---|---|
| `cmake -S . -B build` | **PASS** | Configure/generate completed successfully. | Global CMake configuration |
| `cmake --build build -j$(nproc)` | **PASS** | Full build succeeded; `map-server` linked with updated vending/status/atcommand changes. | `src/map/vending.cpp`, `src/map/status.cpp`, `src/map/atcommand.cpp` |
| `ctest --test-dir build --output-on-failure` | **PASS** (no tests) | `No tests were found!!!` | Test harness discovery |
| `timeout 30s ./map-server --run-once` | **FAIL** (env/deps) | Missing `conf/import/*`, missing custom NPC files, and unavailable MySQL (`127.0.0.1:3306`). | Runtime environment prerequisites |
