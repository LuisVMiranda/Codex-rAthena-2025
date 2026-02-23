# Damage Log DIFF

This is a production-ready smart damage log for rAthena projects.

## Contents
- `sql/damage_log_entries.sql`: standalone table schema.
- `sql/ml_damage_log_12h_cleanup.sql`: optional 12-hour cleanup procedure/event.
- `npc/npc_damage_log.txt`: NPC draft with @damagecounter, @dps, @dps2, @dpstipo, @dps2tipo.
- `docs/integration.md`: source integration notes.
- `diffs/damage_log_rathena_base.diff`: base rAthena-only patch (native `src/map/*.hpp|*.cpp` changes).

## Source integration points
- `src/map/log.hpp` / `src/map/log.cpp`: `log_damage_entry` and `log_damage_death`.
- `src/map/status.cpp`: hook damage flow in `status_damage`.
- `src/map/pc.cpp`: hook death flow in `pc_dead`.
- **BONUS**: `src/map/script.cpp`: `getskillname()` buildin helper for skill names display instead of IDs.

Apply these changes in future projects:
```bash
git apply DamageLog-DIFF/diffs/damage_log_rathena_base.diff
```

## Damage columns semantics
- `damage_type`: flow/event (`outgoing`, `incoming`, `death`).
- `damage_nature`: nature (`physical`, `magical`, `misc`, `unknown`).

## Verification query
```sql
SELECT damage_type, damage_nature, COUNT(*) AS hits,
       SUM(damage_dealt) AS dealt, SUM(damage_taken) AS taken
FROM damage_log_entries
GROUP BY damage_type, damage_nature
ORDER BY damage_type, damage_nature;
```

## Quick manual reproduction
1. Basic melee hit on a target -> expect `physical`.
2. Cast a magic bolt skill -> expect `magical`.
3. Trigger poison/status tick/special damage -> expect `misc` or `unknown`.
4. Get killed -> expect a `death` row in `damage_type` while nature remains separate.
