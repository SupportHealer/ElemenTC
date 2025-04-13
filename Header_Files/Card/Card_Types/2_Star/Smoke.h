#pragma once

#include "Card.h"

class Smoke : public Card {
private:

public:
	Smoke(int value, int stars = 2, int id = 9, std::string name = "Smoke", std::string ability = "Dammage Aura");
	~Smoke();
};