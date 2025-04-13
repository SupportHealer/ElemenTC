#include "Card.h"
#include "Assets.h"

#include "Player.h"


int main() {
	std::vector<Card*> hand;

	Player player;

	Card* PrimaryCard = new Fire(7);
	Card* SecondaryCard = new Water(5);
	Card* Card1 = new Earth(1);
	Card* Card2 = new Air(2);

	player.setPrimaryCard(PrimaryCard);
	player.setSecondaryCard(SecondaryCard);
	hand = player.getHand();
	hand.push_back(Card1);
	hand.push_back(Card2);
	player.setHand(hand);

	Card* card = Combine(*Card1, *Card2);
	hand = player.getHand();

	player.printHand();
}