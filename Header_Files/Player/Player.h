#pragma once

#include <vector>

#include "Card.h"
#include "Assets.h"

class Player {
	private:
		std::string _name; // Player name
		std::vector<Card*> _Hand; // Max 5
		Card* _PrimaryCard;
		Card* _SecondaryCard;

		int _Health;
		int _Dammage;
		int _Shield;
		int _Movement;

		int _HAura; // Healing Aura
		int _DAura; // Dammage Aura
	public:
		Player(std::string name = "Unknown", int health = 100, int dammage = 0, int shield = 0, int movement = 0);
		~Player();

		int calcHandValue();

		void printCard(Card* card);
		void printHand();

		// Getters
		std::string getName() const;
		std::vector<Card*> getHand() const;
		Card* getPrimaryCard() const;
		Card* getSecondaryCard() const;
		int getHealth() const;
		int getDammage() const;
		int getShield() const;
		int getMovement() const;
		int getHAura() const;
		int getDAura() const;

		// Setters 
		void setName(std::string name);
		void setHand(std::vector<Card*> hand);
		void setPrimaryCard(Card* card);
		void setSecondaryCard(Card* card);
		void setHealth(int health);
		void setDammage(int dammage);
		void setShield(int shield);
		void setMovement(int movement);
		void setHAura(int aura);
		void setDAura(int aura);
};