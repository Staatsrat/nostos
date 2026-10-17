#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")/../implant"

mkdir -p bin

g++ -std=c++17 -O2 -s \
    -Iinclude \
    src/nostos.cpp \
    -o bin/nostos \
    -lpthread

echo "[+] Built: implant/bin/nostos"
