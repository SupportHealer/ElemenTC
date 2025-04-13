#include "Assets.h"

bool canCombine(Card C1, Card C2) {
	if (C1.getStars() == C2.getStars() && C1.getId() != C2.getId()) {
		if (C1.getStars() != 3 || C2.getStars() != 3) {
			return true;
		}
	}
	return false;
}

Card* Combine(Card C1, Card C2) {
	if ((C1.getName() == "Fire" && C2.getName() == "Earth") || (C1.getName() == "Earth" && C2.getName() == "Fire")) {
		Magma* card = new Magma(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}
	else if ((C1.getName() == "Water" && C2.getName() == "Fire") || (C1.getName() == "Fire" && C2.getName() == "Water")) {
		Steam* card = new Steam(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}
	else if ((C1.getName() == "Earth" && C2.getName() == "Water") || (C1.getName() == "Water" && C2.getName() == "Earth")) {
		Mud* card = new Mud(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}
	else if ((C1.getName() == "Air" && C2.getName() == "Water") || (C1.getName() == "Water" && C2.getName() == "Air")) {
		Ice* card = new Ice(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}
	else if ((C1.getName() == "Air" && C2.getName() == "Fire") || (C1.getName() == "Fire" && C2.getName() == "Air")) {
		Smoke* card = new Smoke(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}
	else if ((C1.getName() == "Air" && C2.getName() == "Earth") || (C1.getName() == "Earth" && C2.getName() == "Air")) {
		Sand* card = new Sand(combineValues(C1.getValue(), C2.getValue()));
		return card;
	}

	// WIP
}

int combineValues(int value1, int value2)
{
	return ((value1 + value2) % 14) + 2;
}