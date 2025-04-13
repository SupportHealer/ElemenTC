#pragma once

#include "Card.h"

class Sand : public Card {
private:

public:
	Sand(int value, int stars = 2, int id = 8, std::string name = "Sand", std::string ability = "Slowness Tile");
	~Sand();
};
