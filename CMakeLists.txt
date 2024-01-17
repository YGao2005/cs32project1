cmake_minimum_required(VERSION 3.26)
project(32proj1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        main.cpp
        Player.cpp
        Tooter.cpp
        City.cpp
)

add_executable(32proj1
        main.cpp
        Player.cpp
        Tooter.cpp
        Game.cpp
        City.cpp
        utilities.cpp
        History.h
        History.cpp
)
