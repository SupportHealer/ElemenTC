#pragma once

#include "Card.h"

class Magma : public Card {
private:

public:
	Magma(int value, int stars = 2, int id = 6, std::string name = "Magma", std::string ability = "Dammage Tile");
	~Magma();
};
