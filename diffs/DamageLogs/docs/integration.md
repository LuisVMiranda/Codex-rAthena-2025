## Integration summary
1. Create `damage_log_entries` table.
2. Apply source hooks in `log.cpp`, `status.cpp`, and `pc.cpp`.
3. Load NPC draft and ensure `#DAMAGELOG` is enabled per account.
4. Optionally enable the 12h cleanup event.

## Debug behavior
If the table is missing, map-server emits a warning once and prints SQL debug output.

## Damage fields semantics
- `damage_type` stores flow/event (`outgoing`, `incoming`, `death`).
- `damage_nature` stores damage nature (`physical`, `magical`, `misc`, `unknown`).

## Quick SQL verification
```sql
SELECT damage_type, damage_nature, COUNT(*) AS hits,
       SUM(damage_dealt) AS dealt, SUM(damage_taken) AS taken
FROM damage_log_entries
GROUP BY damage_type, damage_nature
ORDER BY damage_type, damage_nature;
```

## Manual reproduction
1. Basic melee attack (no skill): expect `damage_type='outgoing'`, `damage_nature='physical'`.
2. Cast a bolt spell (e.g. Fire Bolt): expect `damage_nature='magical'`.
3. Take periodic/status/special damage (poison, trap, etc.): expect `damage_nature='misc'` or `unknown` for unsupported sources.
4. Die to any source: expect a `damage_type='death'` row with `damage_nature='unknown'`.
