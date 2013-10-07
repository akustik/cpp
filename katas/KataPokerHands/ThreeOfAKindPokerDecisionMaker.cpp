/*
 * ThreeOfAKindPokerDecisionMaker.cpp
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#include "ThreeOfAKindPokerDecisionMaker.h"
#include <sstream>

using namespace std;

namespace pokerhands {

ThreeOfAKindPokerDecisionMaker::ThreeOfAKindPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

ThreeOfAKindPokerDecisionMaker::~ThreeOfAKindPokerDecisionMaker() {

}

string ThreeOfAKindPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	int aHasThreeOfAKind = hasCardsWithSameValue(a, 3);
	int bHasThreeOfAKind = hasCardsWithSameValue(b, 3);

	if(aHasThreeOfAKind > bHasThreeOfAKind){
		stringstream ss;
		ss << a.owner() << " wins. - with three of a kind";
		response = ss.str();
	} else if (aHasThreeOfAKind < bHasThreeOfAKind){
		stringstream ss;
		ss << b.owner() << " wins. - with three of a kind";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
