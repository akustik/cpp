/*
 * PokerHandParserTest.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include <gtest.h>
#include "PokerHand.h"
#include "PokerHandParser.h"
#include <string>
#include <vector>

using namespace std;
using namespace pokerhands;

TEST(PokerHandParserSpecs, ShouldReturnTwoPokerHandsWithOwners){
	PokerHandParser parser;
	vector<PokerHand> hands = parser.parse(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C AH"));

	ASSERT_EQ(2u, hands.size()) << "The number of hands is wrong";
	ASSERT_EQ(string("Black"), hands[0].owner()) << "The first owner is wrong";
	ASSERT_EQ(string("White"), hands[1].owner()) << "The second owner is wrong";
}

TEST(PokerHandParserSpecs, ShouldReturnTwoPokerHandsWithTheGivenCards){
	PokerHandParser parser;
	const vector<PokerHand> hands = parser.parse(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C AH"));

	ASSERT_EQ(2u, hands.size()) << "The number of hands is wrong";
	ASSERT_EQ(string("2H"), hands[0].cards()[0].card()) << "The first card of the first hand is wrong";
	ASSERT_EQ(string("KD"), hands[0].cards()[4].card()) << "The fifth card of the first hand is wrong";

	ASSERT_EQ(string("2C"), hands[1].cards()[0].card()) << "The first card of the second hand is wrong";
	ASSERT_EQ(string("AH"), hands[1].cards()[4].card()) << "The fifth card of the second hand is wrong";
}

