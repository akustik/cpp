/*
 * PokerHandsRules.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHandsRules.h"
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

namespace pokerhands {

PokerHandsRules::PokerHandsRules() {

}

PokerHandsRules::~PokerHandsRules() {

}

const string PokerHandsRules::chooseWinner(const string input) const throw(){
	vector<PokerHand> hands = _parser.parse(input);
	if(hands.size() == 2){
		string response;
		const vector<PokerCard> h1Cards = hands[0].cards();
		const vector<PokerCard> h2Cards = hands[1].cards();

		vector<PokerCard> hand1Cards = vector<PokerCard>(h1Cards);
		vector<PokerCard> hand2Cards = vector<PokerCard>(h2Cards);

		//sort both hands
		sort(hand1Cards.begin(), hand1Cards.end());
		sort(hand2Cards.begin(), hand2Cards.end());

		//check who has the higher value, for tie, continue
		for(unsigned int i=hand1Cards.size() - 1; i>=0; i--){
			if(hand1Cards[i] < hand2Cards[i]){
				stringstream ss;
				ss << hands[1].owner() << " wins. - with high card: " << hand2Cards[i].name();
				response = ss.str();
				break;
			} else if(hand1Cards[i] > hand2Cards[i]){
				stringstream ss;
				ss << hands[0].owner() << " wins. - with high card: " << hand1Cards[i].name();
				response = ss.str();
				break;
			} else {
				response = string("Tie.");
			}
		}

		return response;

	} else {
		return string("Unknown situation");
	}
}


} /* namespace pokerhands */
