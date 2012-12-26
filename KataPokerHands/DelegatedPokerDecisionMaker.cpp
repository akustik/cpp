/*
 * DelegatedPokerDecisionMaker.cpp
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#include "DelegatedPokerDecisionMaker.h"
#include <string>
#include "PokerHand.h"
#include "PokerDecisionMaker.h"

using namespace std;

namespace pokerhands {

DelegatedPokerDecisionMaker::DelegatedPokerDecisionMaker(PokerDecisionMaker* delegate) {
	_delegate = delegate;
}

DelegatedPokerDecisionMaker::~DelegatedPokerDecisionMaker() {
	delete _delegate;
}

string DelegatedPokerDecisionMaker::decide(PokerHand &a, PokerHand &b){
	string decision = decideOrDelegate(a, b);
	if(decision.size() > 0){
		return decision;
	} else {
		return _delegate->decide(a, b);
	}
}

} /* namespace pokerhands */
