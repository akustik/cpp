/*
 * FourOfKindPokerDecisionMaker.cpp
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#include "FourOfKindPokerDecisionMaker.h"
#include "DelegatedPokerDecisionMaker.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

namespace pokerhands {

FourOfKindPokerDecisionMaker::FourOfKindPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

FourOfKindPokerDecisionMaker::~FourOfKindPokerDecisionMaker() {

}

string FourOfKindPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	int aHasFourOfAKind = hasCardsWithSameValue(a, 4);
	int bHasFourOfAKind = hasCardsWithSameValue(b, 4);
	if(aHasFourOfAKind > bHasFourOfAKind){
		stringstream ss;
		ss << a.owner() << " wins. - with four of a kind";
		response = ss.str();
	} else if (aHasFourOfAKind < bHasFourOfAKind){
		stringstream ss;
		ss << b.owner() << " wins. - with four of a kind";
		response = ss.str();
	} else {
		//Clean up the occurrences and delegate
		if(aHasFourOfAKind > -1){
			int removed = a.removeCardsByValue(aHasFourOfAKind, 4);
			vector<PokerCard> aCards = a.cards();
			cout << "[INFO]" << " Removing " << removed <<
					" repetitions of " << aHasFourOfAKind << ", remain " <<
					stringify(aCards) << endl;
		}

		if(bHasFourOfAKind > -1){
			int removed = b.removeCardsByValue(bHasFourOfAKind, 4);
			vector<PokerCard> bCards = b.cards();
			cout << "[INFO]" << " Removing " << removed <<
					" repetitions of " << bHasFourOfAKind << ", remain " <<
					stringify(bCards) << endl;
		}
	}
	return response;
}

} /* namespace pokerhands */
