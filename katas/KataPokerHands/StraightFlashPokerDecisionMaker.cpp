/*
 * StraightFlashPokerDecisionMaker.cpp
 *
 *  Created on: Dec 27, 2012
 *      Author: guillem
 */

#include "StraightFlashPokerDecisionMaker.h"
#include "DelegatedPokerDecisionMaker.h"
#include <sstream>
#include <string>

using namespace std;

namespace pokerhands {

StraightFlashPokerDecisionMaker::StraightFlashPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

StraightFlashPokerDecisionMaker::~StraightFlashPokerDecisionMaker() {

}


string StraightFlashPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	bool aHasStraightFlash = hasFlash(a) && hasStraight(a);
	bool bHasStraightFlash = hasFlash(b) && hasStraight(b);
	if(aHasStraightFlash && !bHasStraightFlash){
		stringstream ss;
		ss << a.owner() << " wins. - with straight flash";
		response = ss.str();
	} else if (!aHasStraightFlash && bHasStraightFlash){
		stringstream ss;
		ss << b.owner() << " wins. - with straight flash";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
