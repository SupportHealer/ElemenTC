#pragma once

#include "Card.h"

class Steam : public Card {
private:

public:
	Steam(int value, int stars = 2, int id = 10, std::string name = "Steam", std::string ability = "Healing Aura");
	~Steam();
};
