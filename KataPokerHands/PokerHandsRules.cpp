/*
 * PokerHandsRules.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHandsRules.h"
#include "PokerHandParser.h"
#include <string>
#include <algorithm>
#include <sstream>
#include "HighCardPokerDecisionMaker.h"
#include "FlashPokerDecisionMaker.h"
#include "StraightFlashPokerDecisionMaker.h"
#include "FourOfKindPokerDecisionMaker.h"
#include "FullHousePokerDecisionMaker.h"
#include "ThreeOfAKindPokerDecisionMaker.h"
#include "StraightPokerDecisionMaker.h"
#include "TwoPairsPokerDecisionMaker.h"
#include "SimplePairPokerDecisionMaker.h"
#include "PokerCardException.h"

using namespace std;

namespace pokerhands {

PokerHandsRules::PokerHandsRules() {

}

PokerHandsRules::~PokerHandsRules() {

}

const string PokerHandsRules::chooseWinner(const string input) const throw(){
	string response("Unknown situation");
	try {
		PokerHandParser parser;
		vector<PokerHand> hands = parser.parse(input);
		if(hands.size() == 2){
			PokerDecisionMaker* highCardDM = new HighCardPokerDecisionMaker();
			PokerDecisionMaker* pairDM = new SimplePairPokerDecisionMaker(highCardDM);
			PokerDecisionMaker* twoPairsDM = new TwoPairsPokerDecisionMaker(pairDM);
			PokerDecisionMaker* threeDM = new ThreeOfAKindPokerDecisionMaker(twoPairsDM);
			PokerDecisionMaker* straightDM = new StraightPokerDecisionMaker(threeDM);
			PokerDecisionMaker* flashDM = new FlashPokerDecisionMaker(straightDM);
			PokerDecisionMaker* fullHouseDM = new FullHousePokerDecisionMaker(flashDM);
			PokerDecisionMaker* fourDM = new FourOfKindPokerDecisionMaker(fullHouseDM);
			PokerDecisionMaker* straightFlashDM = new StraightFlashPokerDecisionMaker(fourDM);
			response = straightFlashDM->decide(hands[0], hands[1]);
			delete straightFlashDM; //delete is chained
		}
	}catch(PokerCardException& e){
		response = string(e.what());
	}

	return response;
}


} /* namespace pokerhands */
