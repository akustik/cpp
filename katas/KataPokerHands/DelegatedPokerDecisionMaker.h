/*
 * DelegatedPokerDecisionMaker.h
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#ifndef DELEGATEDPOKERDECISIONMAKER_H_
#define DELEGATEDPOKERDECISIONMAKER_H_

#include <string>
#include "PokerHand.h"
#include "PokerDecisionMaker.h"

using namespace std;

namespace pokerhands {

class DelegatedPokerDecisionMaker: public PokerDecisionMaker {
private:
	PokerDecisionMaker* _delegate;
public:
	DelegatedPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~DelegatedPokerDecisionMaker();

	virtual string decideOrDelegate(PokerHand&, PokerHand&) = 0;
	string decide(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* DELEGATEDPOKERDECISIONMAKER_H_ */
