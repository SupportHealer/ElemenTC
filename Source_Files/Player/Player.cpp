#include "Player.h"

Player::Player(std::string name, int health, int dammage, int shield, int movement) {
	_name = name;
	_Health = health;
	_Dammage = dammage;
	_Shield = shield;
	_Movement = movement;
	_HAura = 0;
	_DAura = 0;
	_PrimaryCard = nullptr;
	_SecondaryCard = nullptr;
}

Player::~Player() {
	// Destructor implementation (if needed)
}


int Player::calcHandValue() {
	if (_PrimaryCard && !_SecondaryCard) { // If Theres only a Primary Hand card
		return _PrimaryCard->getValue();
	}
	else if (!_PrimaryCard) {
		return 0;
	}
	else if (_PrimaryCard->getName() == _SecondaryCard->getName()) {
		return _PrimaryCard->getValue() + _SecondaryCard->getValue() + 5; // Pair Bonus
	}
	return _PrimaryCard->getValue() + _SecondaryCard->getValue();
}

void Player::printCard(Card* card) {
	if (card != nullptr) {
		std::cout << card->getName() + "(" + std::to_string(card->getValue()) + ")";
		for (int i = 0; i < card->getStars(); i++) {
			std::cout << "*";
		}
	}
}

void Player::printHand() {
	std::cout << "---Hand---" << std::endl;

	std::cout << "Primary: ";
	printCard(_PrimaryCard);

	std::cout << std::endl;

	std::cout << "Secondary: ";
	printCard(_SecondaryCard);

	for (int i = 0; i < _Hand.size(); i++) {
		std::cout << std::endl;
		std::cout << "Card " + std::to_string(i + 1) + ": ";
		printCard(_Hand[i]);
	}
}


// Getters
std::string Player::getName() const {
	return _name;
}

std::vector<Card*> Player::getHand() const {
	return _Hand;
}

Card* Player::getPrimaryCard() const {
	return _PrimaryCard;
}

Card* Player::getSecondaryCard() const {
	return _SecondaryCard;
}

int Player::getHealth() const {
	return _Health;
}

int Player::getDammage() const {
	return _Dammage;
}

int Player::getShield() const {
	return _Shield;
}

int Player::getMovement() const {
	return _Movement;
}

int Player::getHAura() const {
	return _HAura;
}

int Player::getDAura() const {
	return _DAura;
}


// Setters
void Player::setName(std::string name) {
	_name = name;
}

void Player::setHand(std::vector<Card*> hand) {
	_Hand = hand;
}

void Player::setPrimaryCard(Card* card) {
	_PrimaryCard = card;
}

void Player::setSecondaryCard(Card* card) {
	_SecondaryCard = card;
}

void Player::setHealth(int health) {
	_Health = health;
}

void Player::setDammage(int dammage) {
	_Dammage = dammage;
}

void Player::setShield(int shield) {
	_Shield = shield;
}

void Player::setMovement(int movement) {
	_Movement = movement;
}

void Player::setHAura(int aura) {
	_HAura = aura;
}

void Player::setDAura(int aura) {
	_DAura = aura;
}

