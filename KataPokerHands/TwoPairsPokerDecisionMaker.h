/*
 * TwoPairsPokerDecisionMaker.h
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#ifndef TWOPAIRSPOKERDECISIONMAKER_H_
#define TWOPAIRSPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

namespace pokerhands {

class TwoPairsPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	TwoPairsPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~TwoPairsPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* TWOPAIRSPOKERDECISIONMAKER_H_ */
