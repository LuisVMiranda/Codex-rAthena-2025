# Implementation notes

## Runtime model
- `pc_useitem()` intercepts `nameid == 7035` and calls `npc_campfire_use_item()`.
- A hidden template NPC (`CAMPFIRE_TEMPLATE`) is duplicated at runtime with visual class `10252`.
- Active campfires are tracked by NPC ID and owner char ID.
- Two timers are used:
  - pulse timer every 10s for regeneration
  - expiration timer at 60s / 120s based on VIP

## Regeneration target rules
- Campfire heals:
  - owner always
  - same-party players (`party_id` match)
  - only players currently in 9-cell radius around the campfire NPC

## Cleanup safety
- On expiry, NPC is unloaded and internal tracking is erased.
- If NPC is unloaded by any other path, tracking/timers are cleaned in `npc_unload()`.
- Prevents duplicate active campfires per owner.

## Potential operational risks
- If `npc/custom/campfire_system.txt` is not loaded, item use fails safely and logs a warning.
- Hardcoded values (range, interval, heal percent) may need balancing per server.
- Uses direct item ID hook (`7035`), so custom item remaps should be adjusted in source.

## Configurability (battle_config)
- `feature.campfire_nonvip_duration` (seconds)
- `feature.campfire_vip_duration` (seconds)
- `feature.campfire_tick_interval` (seconds)
- `feature.campfire_range` (cells)
- `feature.campfire_hp_percent`
- `feature.campfire_sp_percent`
- `feature.campfire_cooldown` (seconds)
- `feature.campfire_icon` (status icon id, `0` disables icon)

## Abuse prevention
- Campfire use is blocked on GvG and Battleground maps.
- Owner-level cooldown is enforced after use.

## UI and progress
- Icon is shown to healed targets while pulse effect is active.
- Campfire template uses `progressbar_npc` labels (`OnCampfireStart`, `OnCampfireStartVIP`) and they are triggered on creation.
