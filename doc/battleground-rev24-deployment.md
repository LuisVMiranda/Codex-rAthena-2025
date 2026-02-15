# Battleground EasyCore rev24 deployment notes

## SQL migration

Run both migrations in order:

1. `sql-files/upgrades/upgrade_20260215_bg_rev24.sql`
2. `sql-files/upgrades/upgrade_20260215_bg_rev24_extended.sql`

The second script is an idempotent translation of `diffs/Battleground-EasyCore-21-24 [OK]/Serverside/sql/extended_bg.sql` and safely expands `char_bg` and `char_wstats` to the rev24 column set using `ADD COLUMN IF NOT EXISTS`.

## Import DB rollout

Copy these templates into `db/import/` for runtime enablement:

- `db/import-tmpl/battleground_db_ex.yml`
- `db/import-tmpl/achievement_db_bg.yml`
- `db/import-tmpl/item_db_bg.yml`
- `db/import-tmpl/mob_db_bg.yml`
- `db/import-tmpl/mob_avail.yml` (contains the alias entries needed by rev24 mobs)
- `db/import-tmpl/map_index.txt` (contains rev24 map IDs)

## NPC script rollout

Enable the `npc/custom/eBG/*.txt` registrations already present in `npc/scripts_custom.conf` and reload scripts.

## Client bundle

Use `doc/battleground-rev24-client-bundle-manifest.md` as the authoritative file list for GRF/data deployment.
