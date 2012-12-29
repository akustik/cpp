/*
 * PokerHandsRulesTest.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include <gtest.h>
#include "PokerHandsRules.h"
#include <string>
#include "PokerCardException.h"

using namespace std;
using namespace pokerhands;

TEST(PokerHandsRulesSpecs, ShouldReturnAnErrorMessageWhenAnUnknownInputIsSubmit){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("unknown situation"));
	ASSERT_EQ(string("Unknown situation"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldRaiseAnExceptionWhenTheCardCodeIsWrong){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C ZDZ  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("The card format is not valid: ZDZ"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldRaiseAnExceptionWhenTheCardColorIsWrong){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C AZ  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("The card color is not valid: AZ"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldRaiseAnExceptionWhenTheCardValueIsWrong){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C ZC  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("The card value is not valid: ZC"), decision) << "The error message does not match";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithHighCardAce){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C AH"));
	ASSERT_EQ(string("White wins. - with high card: Ace"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHighCardNine){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C KD  White: 2C 3H 4S 8C KH"));
	ASSERT_EQ(string("Black wins. - with high card: 9"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHighCardJack){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C JD  White: 2C 3H 4S 8C TH"));
	ASSERT_EQ(string("Black wins. - with high card: Jack"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithHighCardFourAfterThreeCards){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C JD  White: 2C 4H 5C 9S JC"));
	ASSERT_EQ(string("White wins. - with high card: 4"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldBeTieWithTheSameCards){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3D 5S 9C KD  White: 2D 3H 5C 9S KH"));
	ASSERT_EQ(string("Tie."), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithFlash){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 4S KC TD JH  White: 2S 8S AS QS 3S"));
	ASSERT_EQ(string("White wins. - with flash"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithStraightFlashAgainstFlash){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 3H 5H 4H 6H  White: 2S 8S AS QS 3S"));
	ASSERT_EQ(string("Black wins. - with straight flash"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithFourOfAKindAgainstFlash){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 2S 2C 2D 6H  White: 4S 8S AS QS 3S"));
	ASSERT_EQ(string("Black wins. - with four of a kind"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithFourOfAKindHigherThanBlackFourOfAKind){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 2H 2S 2C 2D 6H  White: 3H 3S 3C QS 3D"));
	ASSERT_EQ(string("White wins. - with four of a kind"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithFullHouse){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 6D 2S 8C AD 6H  White: 5H 5S 5C 4S 4D"));
	ASSERT_EQ(string("White wins. - with full house"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHigherFullHouse){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 6H 6S 6C 3D 3H  White: 5H 5S 5C 4S 4D"));
	ASSERT_EQ(string("Black wins. - with full house"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithThreeOfAKind){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 4H 2S 8C AD 3H  White: 5H 5S 5C 3S 4S"));
	ASSERT_EQ(string("White wins. - with three of a kind"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHigherThreeOfAKind){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 6H 6S 6C 2D 3H  White: 5S 5H 5D 7S 4S"));
	ASSERT_EQ(string("Black wins. - with three of a kind"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinWhiteWithStraight){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 5C 2C 8C AD 5D  White: 2S 3H 4S 5S 6S"));
	ASSERT_EQ(string("White wins. - with straight"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithHigherStraight){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 3C 4D 5C 6D 7H  White: 2S 3H 4S 5S 6S"));
	ASSERT_EQ(string("Black wins. - with straight"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithTwoPairsWithHigherFirst){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 3H 3S 4C 4D 7H  White: 2S 2H 4S 3D 3C"));
	ASSERT_EQ(string("Black wins. - with two pairs"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithTwoPairsWithHigherSecond){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 3H 3S 4C 4D 7H  White: 2S 2H 4H 4S 7S"));
	ASSERT_EQ(string("Black wins. - with two pairs"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithTwoPairsWithHigherCard){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 3C 3D 4C 4D TH  White: 3S 3H 4S 4H 7S"));
	ASSERT_EQ(string("Black wins. - with high card: 10"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithAPairWithHigherCard){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 8H 3S 8C 4D TH  White: 3C 3H 8S 4S 7S"));
	ASSERT_EQ(string("Black wins. - with a pair"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithAPair){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 8H 3S 8C 4D TH  White: 2S 3H 8S 4S 7S"));
	ASSERT_EQ(string("Black wins. - with a pair"), decision) << "The decision is not correct";
}

TEST(PokerHandsRulesSpecs, ShouldWinBlackWithPairTieAndHigherCard){
	PokerHandsRules rules;
	string decision = rules.chooseWinner(string("Black: 8H 3S 8C 4D TH  White: 2S 8D 8S 4S 5S"));
	ASSERT_EQ(string("Black wins. - with high card: 10"), decision) << "The decision is not correct";
}





