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
	ASSERT_EQ(string("Unknown lala"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithHighCardAce){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("White wins. - with high card: Ace"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHighCardJack){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C JD  White: 2C 3H 4S 8C TH"));
	ASSERT_EQ(string("Black wins. - with high card: Jack"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithHighCardFourAfterThreeCards){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C JD  White: 2C 4H 5S 9C JD"));
	ASSERT_EQ(string("White wins. - with high card: 4"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldBeTieWithTheSameCards){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 4D 5S 9C JD  White: 2C 4H 5S 9C JD"));
	ASSERT_EQ(string("Tie."), decision) << "The decision is not correct";
}




