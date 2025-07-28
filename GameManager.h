#pragma once

#include "Main.h"
#include "Game.h"

class GameManager {
public:
	Game NewGame(GameOptions options, const Player humanPlayer) {
		std::vector<Player> players;

		players.push_back(humanPlayer);

		for (auto x = 1; x < options.NumPlayers; x++) {
			Player aiPlayer = Player("Testo", PlayerType::COMPUTER);

			players.push_back(aiPlayer);
		}

		return Game(options, players);
	}

	std::optional<Game> LoadGame(std::string fileName) {
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

	bool SaveGame(const Game& game, std::string fileName) {
		std::ofstream file;

		file.open(fileName, std::ios::binary);

		if (!file.is_open()) {
			return false;
		}

		file.close();

		return true;
	}
};