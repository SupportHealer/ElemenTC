#pragma once

#include "Card.h"

class Ice : public Card {
private:

public:
	Ice(int value, int stars = 2, int id = 5, std::string name = "Ice", std::string ability = "Healing Tile");
	~Ice();
};