#include "Card.h"


// Constructor
Card::Card(int value, int stars, int id, std::string name, std::string ability) {
	_value = value;
	_stars = stars;
	_id = id;
	_name = name;
	_ability = ability;
}


// Getters
int Card::getValue() const {
	return _value;
}

int Card::getStars() const {
	return _stars;
}

int Card::getId() const {
	return _id;
}

std::string Card::getName() const {
	return _name;
}

std::string Card::getAbility() const {
	return _ability;
}


// Setters
void Card::setValue(int value) {
	_value = value;
}

void Card::setStars(int stars) {
	_stars = stars;
}


void Card::setId(int id) {
	_id = id;
}

void Card::setName(std::string name) {
	_name = name;
}

void Card::setAbility(std::string ability) {
	_ability = ability;
}
