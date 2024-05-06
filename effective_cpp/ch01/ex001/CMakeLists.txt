# プロジェクト名を設定
project(EffectiveCpp)

# BADCODEオプションを定義（デフォルトはOFF）
option(BADCODE "Build with bad code" OFF)

# 定義がONの場合、BADCODEをプリプロセッサとして追加
if(BADCODE)
    add_definitions(-DBADCODE)
endif()

# 実行ファイルを定義
add_executable(main.exe main.cpp)

# 必要ならば、ターゲットに対してリンクするライブラリやインクルードディレクトリを指定
