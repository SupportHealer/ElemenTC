#pragma once

#include <iostream>
#include <string>


class Card
{
private:
	int _value; // 1-10, Q, K, A (1-13)
	int _stars; // 1-3
	int _id; // 1-25 ("Air" - 1, "Earth" - 2, "Fire" - 3, "Water" - 4)

	std::string _name; // "Air", "Earth", "Fire", "Water"
	std::string _ability; // "Healing", "Dammage", "Movment"
public:
	Card(int value, int stars, int id, std::string name, std::string ability);

	int getValue() const;
	int getStars() const;
	int getId() const;
	std::string getName() const;
	std::string getAbility() const;

	void setValue(int value);
	void setStars(int stars);
	void setId(int id);
	void setName(std::string name);
	void setAbility(std::string ability);
};