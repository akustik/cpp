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

TEST(PokerCardSpecs, ShouldBeAbleToCheckWhetherTwoCardsHaveTheSameValue){
	PokerCard card1(string("2H"));
	PokerCard card2(string("2C"));

	ASSERT_TRUE(card1 == card2) << "The equality comparison failed";
}

TEST(PokerCardSpecs, ShouldBeAbleToCheckWhetherACardHasLessValueThanAnother){
	PokerCard card1(string("2H"));
	PokerCard card2(string("AC"));

	ASSERT_TRUE(card1 < card2) << "The lower than comparison failed";
}


