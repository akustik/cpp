/*
 * FlashPokerDecisionMaker.cpp
 *
 *  Created on: Dec 27, 2012
 *      Author: guillem
 */

#include "FlashPokerDecisionMaker.h"
#include "DelegatedPokerDecisionMaker.h"
#include <sstream>
#include <string>

using namespace std;

namespace pokerhands {

FlashPokerDecisionMaker::FlashPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

FlashPokerDecisionMaker::~FlashPokerDecisionMaker() {

}

bool FlashPokerDecisionMaker::hasFlash(PokerHand& h){
	vector<PokerCard> cards = h.cards();
	char color = cards[0].color();
	bool hasFlash = true;
	for(unsigned int i=0; i<cards.size(); i++){
		if(cards[i].color() != color){
			hasFlash = false;
			break;
		}
	}

	return hasFlash;
}

string FlashPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	bool aHasFlash = hasFlash(a);
	bool bHasFlash = hasFlash(b);
	if(aHasFlash && !bHasFlash){
		stringstream ss;
		ss << a.owner() << " wins. - with flash";
		response = ss.str();
	} else if (!aHasFlash && bHasFlash){
		stringstream ss;
		ss << b.owner() << " wins. - with flash";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
