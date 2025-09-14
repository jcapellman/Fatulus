#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <optional>
#include <filesystem>
#include <map>

#pragma comment(lib, "glfw3.lib")

const int DEFAULT_STARTING_YEAR = 2025;
const int DEFAULT_GAME_LENGTH = 10;
const int DEFAULT_NUM_PLAYERS = 4;

const std::string GAME_FILE_EXTENSION = ".fsg";
const std::string GAME_DEFAULT_GAME = "base";