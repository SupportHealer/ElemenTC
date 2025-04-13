#pragma once

#include "Card.h"

class Fire : public Card {
private:
public:
	Fire(int value, int stars = 1, int id = 3, std::string name = "Fire", std::string ability = "Dammage");
	~Fire();
};