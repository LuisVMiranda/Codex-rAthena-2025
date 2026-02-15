# Parsed scope (from upstream diff + README/Changelog)

Source files reviewed:
- `Server Files/fe4234cd39e341985b1006a371acf9119a3ae248.diff`
- `README.txt`
- `Changelog.txt`

## Feature scope
1. Extended vending controls in battle config (`extended_vending_*`).
2. Auto vending command and account-level guard (`@autovend`, `@av`, anti-duplicate per account).
3. Achievement guard so offline autovend activity does not incorrectly progress objectives.
4. New vending DB column `vendings.extended_vending_item`.
5. Optional token items and item-ID configs (`item_zeny`, `item_cash`).
6. Legacy rsm-mod config/db payloads migrated into import-based layout.
