/*
 * PokerHandsRulesTest.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include <gtest.h>
#include "PokerHandsRules.h"
#include <string>

using namespace std;
using namespace pokerhands;

TEST(PokerHandsRulesSpecs, ShouldReturnAnErrorMessageWhenAnUnknownInputIsSubmit){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("unknown situation"));
	ASSERT_EQ(string("Unknown situation"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithHighCardAce){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("White wins. - with high card: Ace"), decision) << "The decision is not correct";
}




