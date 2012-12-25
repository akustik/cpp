/*
 * PokerCardTest.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include <gtest.h>
#include "PokerCard.h"
#include <string>
#include <sstream>

using namespace std;
using namespace pokerhands;

TEST(PokerCardSpecs, ShouldPrintTheCardToTheOutputStream){
	PokerCard card(string("2H"));

	stringstream ss;
	ss << card;
	string value = ss.str();

	ASSERT_EQ(string("2H"), value) << "The card value does not match";
}


