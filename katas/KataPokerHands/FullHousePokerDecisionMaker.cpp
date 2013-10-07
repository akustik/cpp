/*
 * FullHousePokerDecisionMaker.cpp
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#include "FullHousePokerDecisionMaker.h"
#include <sstream>

namespace pokerhands {

FullHousePokerDecisionMaker::FullHousePokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

FullHousePokerDecisionMaker::~FullHousePokerDecisionMaker() {

}

string FullHousePokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	int aHasThreeOfAKind = hasCardsWithSameValue(a, 3);
	int bHasThreeOfAKind = hasCardsWithSameValue(b, 3);
	int aHasAdditionalPairOfAKind = hasCardsWithSameValue(a, 2, aHasThreeOfAKind);
	int bHasAdditionalPairOfAKind = hasCardsWithSameValue(b, 2, bHasThreeOfAKind);

	if(aHasThreeOfAKind > bHasThreeOfAKind && aHasAdditionalPairOfAKind > -1){
		stringstream ss;
		ss << a.owner() << " wins. - with full house";
		response = ss.str();
	} else if (aHasThreeOfAKind < bHasThreeOfAKind && bHasAdditionalPairOfAKind > -1){
		stringstream ss;
		ss << b.owner() << " wins. - with full house";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
