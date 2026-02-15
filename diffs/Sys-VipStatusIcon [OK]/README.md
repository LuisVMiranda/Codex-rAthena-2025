# Sys-VipStatusIcon [OK]

This package maps the legacy patch (`0001-System-Vip-Status-Icon.patch`) to the current rAthena source layout.

## 1) Legacy intent mapped to current source

The legacy patch targeted these files, all of which are already represented in current source symbols:

- `src/map/chrif.cpp`
  - VIP enable path starts `SC_VIPSTATE` with remaining VIP duration.
  - VIP disable path ends `SC_VIPSTATE`.
- `src/map/clif.cpp`
  - On `clif_parse_LoadEndAck`, map-server forces a clean `SC_VIPSTATE` refresh and reapplies only when VIP is active and not expired.
- `src/map/status.hpp`
  - `SC_VIPSTATE` exists in `sc_type` and `EFST_VIPSTATE` exists in `efst_type`.
- `src/map/script_constants.hpp`
  - `SC_VIPSTATE` and `EFST_VIPSTATE` are exported for script usage.

## 2) Status DB entry using current import strategy

Do **not** hardcode old assumptions about `db/import/status.yml` existing by default.

Current strategy in this repository:

1. Keep override entries in `db/import-tmpl/status.yml`.
2. Ensure your deployed server has an active `db/import/status.yml` generated from import templates.
3. Include this block in your active import file:

```yml
- Status: VIPSTATE
  Icon: EFST_VIPSTATE
  Flags:
    NoDispell: true
```

If your server policy avoids `db/import`, apply the same block to the active default status DB (`db/re/status.yml` or `db/pre-re/status.yml`).

## 3) Client dependency package and deploy paths

### Required files from this package

- `data/texture/effect/vipstate.tga`
- `data/luafiles514/lua files/stateicon/efstids.lub`
- `data/luafiles514/lua files/stateicon/stateiconimginfo.lub`
- `data/luafiles514/lua files/stateicon/stateiconinfo.lub`

### Deploy paths (client)

Copy to your GRF/data preserving relative paths:

- `data/texture/effect/vipstate.tga`
- `data/luafiles514/lua files/stateicon/efstids.lub`
- `data/luafiles514/lua files/stateicon/stateiconimginfo.lub`
- `data/luafiles514/lua files/stateicon/stateiconinfo.lub`

### Client date compatibility

- Targeted for clients that use `luafiles514` stateicon tables.
- Recommended: 2018+ clients matching your packetver and existing stateicon table format.
- If your client uses a different Lua structure/version, merge the `EFST_VIPSTATE` row into that client's matching stateicon files instead of directly replacing files.

## 4) Validation checklist (no regression)

1. Login with non-VIP account: no `SC_VIPSTATE` icon.
2. Grant VIP (`@viptime` or control panel): icon appears and duration follows remaining VIP seconds.
3. Relog/map-change while VIP active: icon persists via LoadEndAck refresh.
4. Expire/remove VIP: icon is removed and VIP-specific bonuses/storage reset as expected.
5. Repeat while toggling GM/non-GM flags to confirm no unintended behavior.

## 5) Reusable patch

The repository root includes a reusable patch generated for this migration task:

- `Codex diffs/Sys-VipStatusIcon [OK].patch`
