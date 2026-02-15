# DIFFS Audit Report

- Generated: 2026-02-15T01:44:24.741700Z
- Scope: Applicability audit for everything under `diffs/` against this repository and latest upstream `rathena/rathena` (cloned to `/tmp/rathena-upstream`).
- Method: `git apply --check` for patch-like files, plus build/configuration smoke checks.

## Headline Results
- Patch-like files detected: 25
- Applies cleanly on this repo: 8
- Fails on this repo: 17
- Applies cleanly on latest upstream: 10
- Fails on latest upstream: 15

## File-by-file matrix

| File | Type | Local repo apply check | Upstream apply check |
|---|---|---|---|
| `diffs/Battleground-EasyCore-21-24/Clientside/data/arug_cas06.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/arug_cas07.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/arug_cas08.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_a03.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_a04.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_a05.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_b03.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_b04.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_b05.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_c04.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_c05.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_c06.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_c07.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_c08.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc.gnd` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc.rsw` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc2.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc2.gnd` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/bat_cc2.rsw` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/luafiles514/lua files/entryqueue/entryqueuelist.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/luafiles514/lua files/skillinfoz/skillid.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/luafiles514/lua files/skillinfoz/skillinfolist.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/region_8.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/resnametable.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/rush_cas01.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/rush_cas02.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/rush_cas03.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/rush_cas04.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/schg_cas06.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/schg_cas07.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/schg_cas08.gat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/blueskull.act` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/blueskull.spr` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/greenskull.act` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/greenskull.spr` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/redskull.act` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/sprite/¾ÆÀÌÅÛ/redskull.spr` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/effect/µ¶¼ö¸®(b).bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/effect/»çÀÚ(a).bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_guild.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_guild_a.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_guild_b.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_guild_c.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_party.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_party_a.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_party_b.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/apply_party_c.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/boss.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/cq.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/ctf.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/dom.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/eos.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/ru.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/sc.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/td.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/battle_field/ti.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/collection/blueskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/collection/greenskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/collection/redskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/display_mapname/extended_bg.png` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/group/group_100.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/group/group_101.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/group/group_102.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/CS_BG.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/CS_EQUIPMENT.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/CS_WOE.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/blueskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/greenskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/item/redskull.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/arug_cas06.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/arug_cas07.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/arug_cas08.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_a01.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_a02.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_a03.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_a04.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_b01.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_b02.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_b03.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_b04.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_cc.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/bat_cc2.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/region_8.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/rush_cas01.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/rush_cas02.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/rush_cas03.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/rush_cas04.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/schg_cas06.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/schg_cas07.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/map/schg_cas08.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/ÀüÀåÀûÇ¥½Ã.bmp` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/system/achievement_list.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/system/iteminfo.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/system/mapinfo.lub` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Clientside/system/readme.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/achievement_db_bg.yml` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/battleground_db_ex.yml` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/item_db_bg.yml` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/map_cache.dat` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/map_index.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/mob_avail.yml` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/db/import/mob_db_bg.yml` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_common.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_conquest.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_core.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_flavius_ctf.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_flavius_sc.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_flavius_td.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_rush.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_tierra_boss.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_tierra_dom.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/npc/custom/eBG/bg_tierra_ti.txt` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/Serverside/sql/extended_bg.sql` | asset/doc | N/A | N/A |
| `diffs/Battleground-EasyCore-21-24/extended_bg_v3_rev24_(30f8cb1f6e200b90d7ca17f5cda21dc00641c8fb).diff` | patch | FAIL: error: patch failed: conf/battle/battleground.conf:34 | error: conf/battle/battleground.conf: patch does not apply | FAIL: error: patch failed: conf/msg_conf/map_msg.conf:1823 | error: conf/msg_conf/map_msg.conf: patch does not apply |
| `diffs/Battleground-EasyCore-21-24/slices/01-battle-config.patch` | patch | FAIL: error: patch failed: conf/battle/battleground.conf:34 | error: conf/battle/battleground.conf: patch does not apply | OK |
| `diffs/Battleground-EasyCore-21-24/slices/02-core-server-logic.patch` | patch | FAIL: error: patch failed: src/char/char.cpp:54 | error: src/char/char.cpp: patch does not apply | FAIL: error: patch failed: src/char/char.cpp:54 | error: src/char/char.cpp: patch does not apply |
| `diffs/Battleground-EasyCore-21-24/slices/03-script-layer.patch` | patch | FAIL: error: src/custom/atcommand.inc: No such file or directory | error: src/custom/atcommand_def.inc: No such file or directory | OK |
| `diffs/Battleground-EasyCore-21-24/slices/04-db-changes.patch` | patch | OK | OK |
| `diffs/Battleground-EasyCore-21-24/slices/05-client-asset-deployment-checklist.md` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Changelog.txt` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/LEIAME.txt` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/README.txt` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/conf/rsm-mod/battle/items.conf` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/conf/rsm-mod/battle/vendsystem/vending.conf` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/conf/rsm-mod/msg_conf/vendsystem/map_msg_por.txt` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/db/rsm-mod/item_db_vendsystem.yml` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/db/rsm-mod/item_vending_db.yml` | asset/doc | N/A | N/A |
| `diffs/ExtendedVending-v4/Server Files/fe4234cd39e341985b1006a371acf9119a3ae248.diff` | patch | FAIL: error: patch failed: conf/msg_conf/map_msg.conf:1817 | error: conf/msg_conf/map_msg.conf: patch does not apply | FAIL: error: patch failed: src/map/achievement.cpp:1096 | error: src/map/achievement.cpp: patch does not apply |
| `diffs/ExtendedVending-v4/Sql Files/main.sql` | asset/doc | N/A | N/A |
| `diffs/Hidepet/[Daegaladh] hidepet 2.2.diff` | patch | FAIL: error: src/custom/atcommand.inc: No such file or directory | error: src/custom/atcommand_def.inc: No such file or directory | FAIL: error: patch failed: src/map/clif.cpp:4977 | error: src/map/clif.cpp: patch does not apply |
| `diffs/MIGRATION_NOTES.md` | asset/doc | N/A | N/A |
| `diffs/MVP-Spawn-Shakto/MVP-Spawn-v1.0.1.diff` | patch | FAIL: error: patch failed: conf/battle/monster.conf:239 | error: conf/battle/monster.conf: patch does not apply | FAIL: error: patch failed: src/map/mob.cpp:1188 | error: src/map/mob.cpp: patch does not apply |
| `diffs/Mapflag-NoRess/[DIFF] Mapflag NORESS [HD Scripts].diff` | patch | FAIL: error: corrupt patch at line 40 | FAIL: error: corrupt patch at line 40 |
| `diffs/Mapflag-NoRess/[DIFF] Mapflag NORESS [HD Scripts].rebased.patch` | patch | OK | OK |
| `diffs/MobEleView/MobEleView_A.diff` | patch | FAIL: error: src/custom/battle_config_init.inc: No such file or directory | error: src/custom/battle_config_struct.inc: No such file or directory | FAIL: error: patch failed: src/map/clif.cpp:10176 | error: src/map/clif.cpp: patch does not apply |
| `diffs/MonsterChampion/0001-fix-monster-champion.patch` | patch | OK | OK |
| `diffs/MonsterChampion/0001-monstro-campe-o.patch` | patch | FAIL: error: corrupt patch at line 966 | FAIL: error: corrupt patch at line 966 |
| `diffs/MonsterChampion/0001-monstro-campe-o.rebased.patch` | patch | OK | OK |
| `diffs/MonsterChampion/champion_monster.sql` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/luafiles514/lua files/hateffectinfo/HatEffectInfo.lub` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/blue_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/blue_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/gray_aura/gray_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/green_aura/green_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_BEATER.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_CHALLENGER.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_EXPERIENT.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_FURIOUS.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_ILLUSION.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/CM_PRECIOUS.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_beater.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_challenger.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_experient.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_furious.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_illusion.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/icons/cm_precious.tga` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/pink_aura/pink_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/red_aura/red_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_1.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_10.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_11.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_12.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_13.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_14.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_15.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_16.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_17.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_18.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_19.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_2.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_20.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_21.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_22.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_23.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_24.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_3.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_4.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_5.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_6.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_7.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_8.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/effect_9.bmp` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/data/texture/effect/efst_champion_monsters/yellow_aura/yellow_aura.str` | asset/doc | N/A | N/A |
| `diffs/MonsterChampion/desktop.ini` | asset/doc | N/A | N/A |
| `diffs/Overkill/Sistema HitKill.diff` | non-patch | N/A | N/A |
| `diffs/Overkill/Sistema HitKill.rebased.patch` | patch | OK | OK |
| `diffs/SBP-PartyBuff/party_buff.diff` | patch | FAIL: error: patch failed: src/map/atcommand.cpp:10050 | error: src/map/atcommand.cpp: patch does not apply | FAIL: error: patch failed: src/map/atcommand.cpp:10050 | error: src/map/atcommand.cpp: patch does not apply |
| `diffs/SharedZeny/shared_zeny_account.diff` | patch | FAIL: error: patch failed: src/char/char.cpp:307 | error: src/char/char.cpp: patch does not apply | FAIL: error: patch failed: src/char/char.cpp:519 | error: src/char/char.cpp: patch does not apply |
| `diffs/ShowPartySP/party_sp_bar.diff` | patch | FAIL: error: src/custom/atcommand.inc: No such file or directory | error: src/custom/atcommand_def.inc: No such file or directory | FAIL: error: patch failed: src/map/clif.cpp:3246 | error: src/map/clif.cpp: patch does not apply |
| `diffs/ShowRecovery/showrecovery.diff` | patch | FAIL: error: corrupt patch at line 60 | FAIL: error: corrupt patch at line 60 |
| `diffs/ShowRecovery/showrecovery.rebased.patch` | patch | OK | OK |
| `diffs/SonicBlow-ArrowVulcan/Sonic Blow and Arrow Vulcan v3.patch` | patch | FAIL: error: db/skill_animation.txt: already exists in working directory | error: patch failed: src/map/clif.cpp:2075 | FAIL: error: patch failed: src/map/clif.cpp:2075 | error: src/map/clif.cpp: patch does not apply |
| `diffs/Sys-VipStatusIcon/0001-System-Vip-Status-Icon.patch` | patch | FAIL: error: db/import/status.yml: No such file or directory | error: patch failed: src/map/chrif.cpp:1607 | FAIL: error: db/import/status.yml: No such file or directory | error: patch failed: src/map/chrif.cpp:1607 |
| `diffs/Sys-VipStatusIcon/data/luafiles514/lua files/stateicon/efstids.lub` | asset/doc | N/A | N/A |
| `diffs/Sys-VipStatusIcon/data/luafiles514/lua files/stateicon/stateiconimginfo.lub` | asset/doc | N/A | N/A |
| `diffs/Sys-VipStatusIcon/data/luafiles514/lua files/stateicon/stateiconinfo.lub` | asset/doc | N/A | N/A |
| `diffs/Sys-VipStatusIcon/data/texture/effect/vipstate.tga` | asset/doc | N/A | N/A |
| `diffs/WeaponShadow/WeaponShadow.diff` | patch | FAIL: error: patch failed: src/common/mmo.hpp:518 | error: src/common/mmo.hpp: patch does not apply | FAIL: error: patch failed: src/common/mmo.hpp:518 | error: src/common/mmo.hpp: patch does not apply |
| `diffs/Wordboss-cutins/WorldBossv3.diff` | non-patch | N/A | N/A |
| `diffs/Wordboss-cutins/WorldBossv3.rebased.patch` | patch | OK | OK |
| `diffs/Wordboss-cutins/data.rar` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/0.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/1.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/10.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/100.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/11.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/12.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/13.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/14.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/15.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/16.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/17.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/18.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/19.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/2.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/20.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/21.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/22.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/23.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/24.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/25.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/26.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/27.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/28.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/29.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/3.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/30.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/31.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/32.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/33.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/34.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/35.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/36.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/37.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/38.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/39.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/4.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/40.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/41.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/42.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/43.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/44.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/45.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/46.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/47.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/48.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/49.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/5.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/50.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/51.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/52.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/53.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/54.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/55.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/56.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/57.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/58.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/59.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/6.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/60.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/61.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/62.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/63.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/64.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/65.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/66.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/67.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/68.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/69.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/7.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/70.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/71.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/72.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/73.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/74.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/75.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/76.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/77.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/78.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/79.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/8.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/80.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/81.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/82.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/83.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/84.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/85.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/86.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/87.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/88.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/89.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/9.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/90.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/91.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/92.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/93.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/94.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/95.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/96.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/97.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/98.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/data/texture/À¯ÀúÀÎÅÍÆäÀÌ½º/illust/99.bmp` | asset/doc | N/A | N/A |
| `diffs/Wordboss-cutins/worldboss.txt` | asset/doc | N/A | N/A |
| `diffs/fakeIcon/fakeIcon.rebased.patch` | patch | OK | OK |
| `diffs/fakeIcon/fakeIcon.txt` | asset/doc | N/A | N/A |

## Why many diffs fail
- Legacy extension points no longer present (`src/custom/*.inc`) are referenced by several old patches.
- Multiple patches are malformed/corrupt and cannot be parsed by `git apply`.
- Some target paths have changed in modern rAthena (example: `db/import/status.yml`).
- Large hunks drifted from current source due line/code changes in core map/char subsystems.

## What to do to implement all systems safely
1. Prefer `*.rebased.patch` where available; they already pass apply checks in many cases.
2. For failing patches, rebase by intent (feature behavior), not by old line numbers.
3. Replace `src/custom/*.inc` injections with current registration/config points in `src/map/*.cpp|hpp` and modern config files.
4. Split mega patches (e.g., Battleground) into feature slices and compile/test after each slice.
5. Run memory/crash checks using ASan/UBSan and map-server stress tests after each integration step.

## Build/Test hiccups observed during this audit
- `cmake -S . -B build` succeeded (with third-party CMake policy warnings).
- `cmake --build build -j2` failed immediately because `<custom/defines_pre.hpp>` was missing (`src/config/core.hpp` includes it). This blocks full runtime verification until custom headers are provided.

## Suggested execution order for integration
1. Apply all clean rebased patches first (Mapflag-NoRess rebased, MonsterChampion rebased/fix, Overkill rebased, ShowRecovery rebased, WorldBoss rebased, fakeIcon rebased, BG slice 04).
2. Port the `src/custom/*.inc`-dependent patches to the current architecture (Hidepet, ShowPartySP, MobEleView, BG slice 03, possibly Extended BG/core portions).
3. Manually rebase line-drifted core patches (SharedZeny, PartyBuff, MVP Spawn, WeaponShadow, SonicBlow/ArrowVulcan, VIP icon, ExtendedVending core diff).
4. Re-run apply checks against both local and latest upstream and only then perform full compile/run tests.
