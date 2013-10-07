/*
 * StraightPokerDecisionMaker.h
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#ifndef STRAIGHTPOKERDECISIONMAKER_H_
#define STRAIGHTPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

namespace pokerhands {

class StraightPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	StraightPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~StraightPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* STRAIGHTPOKERDECISIONMAKER_H_ */
