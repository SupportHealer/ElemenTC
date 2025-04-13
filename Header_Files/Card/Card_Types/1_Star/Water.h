#pragma once

#include "Card.h"

class Water : public Card {
private:
public:
	Water(int value, int stars = 1, int id = 4, std::string name = "Water", std::string ability = "Healing");
	~Water();
};