cmake_minimum_required(VERSION 3.14)
project(Fatalus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES
    "Main.cpp"
    "Game.cpp"
    "Player.cpp"
)

add_executable(Fatalus ${SOURCES})
target_include_directories(Fatalus PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})