/*
 * TwoPairsPokerDecisionMaker.cpp
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#include "TwoPairsPokerDecisionMaker.h"
#include <sstream>

namespace pokerhands {

TwoPairsPokerDecisionMaker::TwoPairsPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

TwoPairsPokerDecisionMaker::~TwoPairsPokerDecisionMaker() {

}

string TwoPairsPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	int aHasAFirstPair = hasCardsWithSameValue(a, 2);
	int aHasASecondPair = hasCardsWithSameValue(a, 2, aHasAFirstPair);
	bool aHasTwoPairs = aHasAFirstPair > -1 && aHasASecondPair;

	int bHasAFirstPair = hasCardsWithSameValue(b, 2);
	int bHasASecondPair = hasCardsWithSameValue(b, 2, bHasAFirstPair);
	bool bHasTwoPairs = bHasAFirstPair > -1 && bHasASecondPair;

	if(aHasTwoPairs && (!bHasTwoPairs || aHasAFirstPair > bHasAFirstPair
			|| aHasASecondPair > bHasASecondPair)){
		stringstream ss;
		ss << a.owner() << " wins. - with two pairs";
		response = ss.str();
	} else if (bHasTwoPairs && (!aHasTwoPairs || bHasAFirstPair > aHasAFirstPair
			|| bHasASecondPair > aHasASecondPair)){
		stringstream ss;
		ss << b.owner() << " wins. - with two pairs";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
