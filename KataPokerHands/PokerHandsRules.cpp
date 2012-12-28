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
#include "HighCardPokerDecisionMaker.h"
#include "FlashPokerDecisionMaker.h"
#include "StraightFlashPokerDecisionMaker.h"
#include "FourOfKindPokerDecisionMaker.h"

using namespace std;

namespace pokerhands {

PokerHandsRules::PokerHandsRules() {

}

PokerHandsRules::~PokerHandsRules() {

}

const string PokerHandsRules::chooseWinner(const string input) const throw(){
	vector<PokerHand> hands = _parser.parse(input);
	string response("Unknown situation");
	if(hands.size() == 2){
		PokerDecisionMaker* highCardDM = new HighCardPokerDecisionMaker();
		PokerDecisionMaker* flashDM = new FlashPokerDecisionMaker(highCardDM);
		PokerDecisionMaker* fourDM = new FourOfKindPokerDecisionMaker(flashDM);
		PokerDecisionMaker* straightFlashDM = new StraightFlashPokerDecisionMaker(fourDM);
		response = straightFlashDM->decide(hands[0], hands[1]);
		delete straightFlashDM; //delete is chained
	}

	return response;
}


} /* namespace pokerhands */
