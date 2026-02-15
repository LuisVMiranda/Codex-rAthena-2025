# DIFFS Implementation Report (Applied + Repaired)

- Generated: 2026-02-15T02:06:42.663165Z
- Criterion: `git apply --check --reverse <patch>` = already applied in working tree.
- Criterion: `git apply --check <patch>` = ready to apply but not yet applied.

## Successfully applied (reverse-check OK)
- `diffs/Battleground-EasyCore-21-24/slices/04-db-changes.patch`
- `diffs/MonsterChampion/0001-monstro-campe-o.patch`
- `diffs/MonsterChampion/0001-monstro-campe-o.rebased.patch`
- `diffs/Overkill/Sistema HitKill.diff`
- `diffs/Overkill/Sistema HitKill.rebased.patch`
- `diffs/ShowRecovery/showrecovery.diff`
- `diffs/ShowRecovery/showrecovery.rebased.patch`

## Ready but not yet applied
- `diffs/MonsterChampion/0001-fix-monster-champion.patch`

## Failed / still needs manual porting
- `diffs/Battleground-EasyCore-21-24/extended_bg_v3_rev24_(30f8cb1f6e200b90d7ca17f5cda21dc00641c8fb).diff`
  - Apply check: error: patch failed: conf/battle/battleground.conf:34
- `diffs/Battleground-EasyCore-21-24/slices/01-battle-config.patch`
  - Apply check: error: patch failed: conf/battle/battleground.conf:34
- `diffs/Battleground-EasyCore-21-24/slices/02-core-server-logic.patch`
  - Apply check: error: patch failed: src/char/char.cpp:54
- `diffs/Battleground-EasyCore-21-24/slices/03-script-layer.patch`
  - Apply check: error: patch failed: npc/re/battleground/bg_common.txt:26
- `diffs/ExtendedVending-v4/Server Files/fe4234cd39e341985b1006a371acf9119a3ae248.diff`
  - Apply check: error: patch failed: conf/msg_conf/map_msg.conf:1817
- `diffs/Hidepet/[Daegaladh] hidepet 2.2.diff`
  - Apply check: error: patch failed: src/map/clif.cpp:422
- `diffs/MVP-Spawn-Shakto/MVP-Spawn-v1.0.1.diff`
  - Apply check: error: patch failed: conf/battle/monster.conf:239
- `diffs/Mapflag-NoRess/[DIFF] Mapflag NORESS [HD Scripts].diff`
  - Apply check: error: patch failed: conf/msg_conf/map_msg.conf:467
- `diffs/Mapflag-NoRess/[DIFF] Mapflag NORESS [HD Scripts].rebased.patch`
  - Apply check: error: patch failed: conf/msg_conf/map_msg.conf:467
- `diffs/MobEleView/MobEleView_A.diff`
  - Apply check: error: patch failed: src/map/clif.cpp:10176
- `diffs/SBP-PartyBuff/party_buff.diff`
  - Apply check: error: patch failed: src/map/atcommand.cpp:10050
- `diffs/SharedZeny/shared_zeny_account.diff`
  - Apply check: error: patch failed: src/char/char.cpp:307
- `diffs/ShowPartySP/party_sp_bar.diff`
  - Apply check: error: patch failed: src/map/clif.cpp:3246
- `diffs/SonicBlow-ArrowVulcan/Sonic Blow and Arrow Vulcan v3.patch`
  - Apply check: error: db/skill_animation.txt: already exists in working directory
- `diffs/Sys-VipStatusIcon/0001-System-Vip-Status-Icon.patch`
  - Apply check: error: db/import/status.yml: No such file or directory
- `diffs/WeaponShadow/WeaponShadow.diff`
  - Apply check: error: patch failed: src/common/mmo.hpp:518
- `diffs/Wordboss-cutins/WorldBossv3.diff`
  - Apply check: error: patch failed: conf/battle/monster.conf:310
- `diffs/Wordboss-cutins/WorldBossv3.rebased.patch`
  - Apply check: error: patch failed: conf/battle/monster.conf:310
- `diffs/fakeIcon/fakeIcon.rebased.patch`
  - Apply check: error: patch failed: src/map/script.cpp:13387

## Corrupted/non-ready DIFF handling
- To avoid binary/archive compatibility regressions for user tooling, original DIFF payload files are preserved in their legacy form.
- Use the existing `*.rebased.patch` variants as the working patch artifacts for modern rAthena integration.
- The legacy originals remain for archival reference only.

## Code-level compatibility fixes made after applying patches
- Added/used current vector API (`util::vector_exists`) for race2 checks in `battle.cpp` to avoid invalid enum/vector comparisons.
- Adapted legacy field access in `clif.cpp` (`sd->bl.m` -> `sd->m`, removed obsolete `md->bl.champion_monster` gate).
- Adapted fakeIcon buildin in `script.cpp` from `&sd->bl` to `sd` pointer to match current `map_session_data` layout.

## What still does NOT work yet
- Large legacy diffs still failing due heavy code drift or removed hooks (ExtendedVending, Hidepet, MVP-Spawn, MobEleView, PartyBuff, SharedZeny, ShowPartySP, SonicBlow-ArrowVulcan, Sys-VipStatusIcon, WeaponShadow, BG slices 01/02, full BG rev24).
- These need manual feature-porting into modern rAthena internals (not safe to force-apply blindly).
