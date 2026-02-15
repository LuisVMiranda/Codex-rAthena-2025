# ExtendedVending-v4 Operator Notes

## Server-side requirements
- Enable feature switches in `conf/battle/feature.conf`:
  - `extended_vending_enable`
  - `extended_vending_report`
  - `extended_vending_broadcast`
  - `extended_vending_showboard`
  - `autovend_enable`
- Currency item IDs are controlled by:
  - `item_zeny`
  - `item_cash`
- Optional local override file: `conf/import/battle_extended_vending.conf` (generated from `conf/import-tmpl/battle_extended_vending.conf`).

## Database changes
- Run the repeatable migration `sql-files/upgrades/upgrade_20260215_extended_vending_v4.sql`.
- Fresh installs already get `vendings.extended_vending_item` from `sql-files/main.sql`.

## Data files
- Import item tokens from `db/import/item_db_extended_vending.yml` (template: `db/import-tmpl/item_db_extended_vending.yml`).

## Client-side requirements
- Ensure your client supports standard vending + autotrade packets for your `PACKETVER`.
- No additional sprite/LUA assets are required for the default token items unless you customize their display resources.

## Commands
- `@autovend` / `@av` must be enabled in atcommand group configuration.
