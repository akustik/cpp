/*
 * HighCardPokerDecisionMaker.cpp
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#include "HighCardPokerDecisionMaker.h"

#include "PokerDecisionMaker.h"
#include <string>
#include "PokerHand.h"
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

namespace pokerhands {

HighCardPokerDecisionMaker::HighCardPokerDecisionMaker() {

}

HighCardPokerDecisionMaker::~HighCardPokerDecisionMaker() {

}

string HighCardPokerDecisionMaker::decide(PokerHand& a, PokerHand& b){
	//default response is tie
	string response = string("Tie.");

	//sort both hands
	vector<PokerCard> aCards = a.cards();
	vector<PokerCard> bCards = b.cards();
	sort(aCards.begin(), aCards.end());
	sort(bCards.begin(), bCards.end());

	//check who has the higher value, for tie, continue
	for(int i=aCards.size() - 1; i>=0; i--){
		if(aCards[i] < bCards[i]){
			stringstream ss;
			ss << b.owner() << " wins. - with high card: " << bCards[i].name();
			response = ss.str();
			break;
		} else if(aCards[i] > bCards[i]){
			stringstream ss;
			ss << a.owner() << " wins. - with high card: " << aCards[i].name();
			response = ss.str();
			break;
		}
	}

	return response;

}

} /* namespace pokerhands */
