#!/bin/bash
# ビルドディレクトリの作成と移動
mkdir -p build
cd ./build

# CMakeの実行
cmake ..

# ビルドの実行
cmake --build .

./main.exe
