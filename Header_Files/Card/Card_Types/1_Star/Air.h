#pragma once

#include "Card.h"

class Air : public Card {
private:

public:
	Air(int value, int stars = 1, int id = 1, std::string name = "Air", std::string ability = "Movment");
	~Air();


};