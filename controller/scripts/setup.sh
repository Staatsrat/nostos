#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/../nostos"

command -v uv >/dev/null 2>&1 || { echo "uv not found"; exit 1; }

[ -f pyproject.toml ] || uv init
uv add "fastapi[standard]"
