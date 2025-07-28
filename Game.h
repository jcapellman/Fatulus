#pragma once

#include "Main.h"

#include "Player.h"

enum Difficulty {
	EASY,
	MEDIUM,
	HARD
};

struct GameOptions {
	int GameLength; // in years
	Difficulty GameDifficulty;
	int NumPlayers;
};

class Game {
public:
	Game() {
		m_year = DEFAULT_STARTING_YEAR;
		m_gameOptions = { DEFAULT_GAME_LENGTH, MEDIUM };
		m_players = std::vector<Player>();
	}

	Game(GameOptions gameOptions, std::vector<Player> players) {
		m_gameOptions = gameOptions;
		m_players = players;
		m_year = DEFAULT_STARTING_YEAR;
	}
private:
	int m_year;
	std::vector<Player> m_players;
	GameOptions m_gameOptions;
};