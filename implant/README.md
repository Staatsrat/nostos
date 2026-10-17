# Nostos Implant

Implant written in C++. HTTP client skeleton that talks
to the Nostos controller. Linux first, Windows later.

> ⚠️ For isolated lab environments only. See [/docs/legal.md](../docs/legal.md).

## Requirements

- `g++` (C++17 or later)
- `cpp-httplib` (header-only)
- `nlohmann/json` (header-only)

## Build

```bash
./scripts/build-implant.sh
