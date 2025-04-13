#pragma once

#include "Card.h"

class Mud : public Card {
private:

public:
	Mud(int value, int stars = 2, int id = 7, std::string name = "Mud", std::string ability = "Slippery Tile");
	~Mud();
};