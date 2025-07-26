#pragma once

#include "Main.h"

enum PlayerType {
	HUMAN,
	COMPUTER
};

class Player {
public:
	Player(std::string name, PlayerType playerType)
	{
		m_name = name;
		m_playerType = playerType;
	}
private:
	std::string m_name;
	PlayerType m_playerType;
};