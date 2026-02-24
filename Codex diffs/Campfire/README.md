# Campfire

Reusable diff package for an item-driven temporary campfire system.

## What this system does
- Consumes **Matchstick** (`item_id: 7035`) on use.
- Spawns a temporary **bonfire NPC sprite** (`class: 10252`) near the player.
- Duration, pulse interval, regen rates, range, cooldown and icon are now configurable via `battle_config` entries (`feature.campfire_*`).
- Disabled automatically on **GvG** and **Battleground** maps.
- Campfire logic updates every 1000ms for zone/visual sync, while healing cadence follows `feature.campfire_tick_interval`.
- Every active heal pulse, campfire heals owner and party members in range with visible recovery numbers.
- Status icon is applied when entering the zone and removed when leaving/expiring (no countdown timer behavior).
- NPC-top progress bar is sent from source packet handling (`clif_progressbar_npc_area`) without locking player movement.
- Campfire auto-removes when time expires.

## Files in this package
- `actual .DIFF/Campfire.DIFF` - source patch to apply.
- `required files/npc/custom/campfire_system.txt` - runtime duplication template NPC.
- `required files/npc/scripts_custom.conf.snippet.txt` - line to enable script loading.
- `required files/conf/battle/feature.conf.snippet.txt` - configurable Campfire battle_config keys.
- `assets/IMPLEMENTATION_NOTES.md` - behavior, constraints, and extension notes.

## Integration checklist
1. Apply `actual .DIFF/Campfire.DIFF`.
2. Copy `required files/npc/custom/campfire_system.txt` to `npc/custom/campfire_system.txt`.
3. Add snippet line to your active scripts conf (commonly `npc/scripts_custom.conf`).
4. Reload/restart map-server.

## Scope and safety
- The logic is isolated to item `7035` handling and NPC runtime duplication flow.
- Does not modify drop, battle formula, status formula, or mob AI systems.
