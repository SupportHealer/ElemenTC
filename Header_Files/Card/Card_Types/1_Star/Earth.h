#pragma once 

#include "Card.h"

class Earth : public Card {
private:
public:
	Earth(int value, int stars = 1, int id = 2, std::string name = "Earth", std::string ability = "Shield");
	~Earth();
};