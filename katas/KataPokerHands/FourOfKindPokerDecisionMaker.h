/*
 * FourOfKindPokerDecisionMaker.h
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#ifndef FOUROFKINDPOKERDECISIONMAKER_H_
#define FOUROFKINDPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

using namespace std;

namespace pokerhands {

class FourOfKindPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	FourOfKindPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~FourOfKindPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* FOUROFKINDPOKERDECISIONMAKER_H_ */
