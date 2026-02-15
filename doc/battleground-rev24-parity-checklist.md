# Battleground EasyCore rev24 parity checklist

## Modes
- [x] Conquest queue definition migrated (`battleground_db_ex.yml`).
- [x] Flavius CTF / Team Deathmatch / Stone Control scripts migrated (`npc/custom/eBG`).
- [x] Tierra Bossnia / Domination / Tierra Valley scripts migrated (`npc/custom/eBG`).
- [x] Rush mode script migrated (`npc/custom/eBG/bg_rush.txt`).

## Rewards
- [x] Item DB additions migrated (`db/import-tmpl/item_db_bg.yml`).
- [x] Achievement reward/progression entries migrated (`db/import-tmpl/achievement_db_bg.yml`).
- [ ] Full live reward tuning parity verified against production rates.

## Queue flow
- [x] Extended queue DB imported through `db/import-tmpl/battleground_db_ex.yml`.
- [x] Queue anti-abuse and announce toggles in core (`AllowSameIP`, `QueueAnnounce`).
- [x] eBG recruiter/controller scripts are in `npc/custom/eBG/bg_core.txt` and `bg_common.txt`.

## Message IDs
- [x] Existing BG queue system message paths remain compatible with current core.
- [ ] Legacy custom message IDs (2012-2036 range from the original diff) are not fully ported into `conf/msg_conf/map_msg.conf`.
- [ ] Legacy custom atcommands (`@leader`, `@reportafk`, `@listenbg`, `@guildskill*`) remain out of scope for this incremental parity pass.
