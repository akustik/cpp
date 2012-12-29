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
	PokerHand hand(string("owner"));

	const string owner = hand.owner();
	ASSERT_EQ(string("owner"), owner) << "The owner does not match";
}

TEST(PokerHandSpecs, ShouldReturnTheCardsProvidedInTheConstructor){
	PokerHand hand(string("owner"));
	hand.addCard(string("2C"));
	const vector<PokerCard> cards = hand.cards();

	ASSERT_EQ(string("2C"), cards[0].card());
}



