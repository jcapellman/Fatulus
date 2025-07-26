#pragma once

#include "Main.h"
#include "Game.h"

class GameManager {
public:
	Game LoadGame(std::string fileName) {
		std::ifstream file;

		file.open(fileName, std::ios::binary);

		if (!file.is_open()) {
			return Game();
		}

		Game game;

		file.read(reinterpret_cast<char*>(&game), sizeof(Game));
		
		file.close();

		return game;
	}

	bool SaveGame(Game game, std::string fileName) {
		std::ofstream file;

		file.open(fileName, std::ios::binary);

		if (!file.is_open()) {
			return false;
		}

		file.write(reinterpret_cast<char*>(&game), sizeof(game));

		file.close();

		return true;
	}
};