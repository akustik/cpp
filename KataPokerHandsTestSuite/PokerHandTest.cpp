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

	ASSERT_EQ(string("owner"), hand.owner()) << "The owner does not match";
}

TEST(PokerHandSpecs, ShouldReturnTheCardsProvidedInTheConstructor){
	PokerHand hand(string("owner"));
	hand.addCard(string("2H"));

	ASSERT_EQ(string("2H"), hand.cards()[0].card());
}



