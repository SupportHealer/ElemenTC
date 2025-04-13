#pragma once

#include "Card.h"

#include "Air.h"
#include "Earth.h"
#include "Fire.h"
#include "Water.h"
#include "Ice.h"
#include "Magma.h"
#include "Mud.h"
#include "Sand.h"
#include "Smoke.h"
#include "Steam.h"

bool canCombine(Card C1, Card C2); // Check if two cards can be combined
Card* Combine(Card C1, Card C2);
int combineValues(int value1, int value2); // Combine values of two cards