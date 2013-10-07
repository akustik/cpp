/*
 * SimplePairPokerDecisionMaker.h
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#ifndef SIMPLEPAIRPOKERDECISIONMAKER_H_
#define SIMPLEPAIRPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

namespace pokerhands {

class SimplePairPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	SimplePairPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~SimplePairPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* SIMPLEPAIRPOKERDECISIONMAKER_H_ */
