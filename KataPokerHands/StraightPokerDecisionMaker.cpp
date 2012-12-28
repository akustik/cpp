/*
 * StraightPokerDecisionMaker.cpp
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#include "StraightPokerDecisionMaker.h"
#include <sstream>

namespace pokerhands {

StraightPokerDecisionMaker::StraightPokerDecisionMaker(PokerDecisionMaker* delegate): DelegatedPokerDecisionMaker(delegate) {

}

StraightPokerDecisionMaker::~StraightPokerDecisionMaker() {

}

string StraightPokerDecisionMaker::decideOrDelegate(PokerHand& a, PokerHand& b){
	string response("");
	string higherCardName("");
	bool aHasStraight = hasStraight(a);
	bool bHasStraight = hasStraight(b);
	if(aHasStraight && (!bHasStraight || a.isHigher(b, higherCardName))){
		stringstream ss;
		ss << a.owner() << " wins. - with straight";
		response = ss.str();
	} else if (bHasStraight && (!aHasStraight || b.isHigher(a, higherCardName))){
		stringstream ss;
		ss << b.owner() << " wins. - with straight";
		response = ss.str();
	}
	return response;
}

} /* namespace pokerhands */
