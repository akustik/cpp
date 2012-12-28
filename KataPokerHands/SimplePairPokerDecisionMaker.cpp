/*
 * SimplePairPokerDecisionMaker.cpp
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#include "SimplePairPokerDecisionMaker.h"
#include <sstream>

namespace pokerhands {

SimplePairPokerDecisionMaker::SimplePairPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

SimplePairPokerDecisionMaker::~SimplePairPokerDecisionMaker() {

}

string SimplePairPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	int aHasAFirstPair = hasCardsWithSameValue(a, 2);
	int bHasAFirstPair = hasCardsWithSameValue(b, 2);

	if(aHasAFirstPair > bHasAFirstPair){
		stringstream ss;
		ss << a.owner() << " wins. - with a pair";
		response = ss.str();
	} else if (aHasAFirstPair < bHasAFirstPair){
		stringstream ss;
		ss << b.owner() << " wins. - with a pair";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
