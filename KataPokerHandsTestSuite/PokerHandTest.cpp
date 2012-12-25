/*
 * PokerHandTest.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include <gtest.h>
#include "PokerHand.h"
#include <string>
#include <vector>

using namespace std;
using namespace pokerhands;

TEST(PokerHandSpecs, ShouldReturnTheOwnerProvidedInTheConstructor){
	vector<string> cards(5);
	PokerHand hand(string("owner"), cards);

	ASSERT_EQ(string("owner"), hand.owner()) << "The owner does not match";
}

TEST(PokerHandSpecs, ShouldReturnTheCardsProvidedInTheConstructor){
	vector<string> cards(5);
	cards[0] = string("2H");
	PokerHand hand(string("owner"), cards);

	ASSERT_EQ(cards, hand.cards()) << "The cards do not match";
	ASSERT_EQ(string("2H"), hand.cards()[0]);
}



