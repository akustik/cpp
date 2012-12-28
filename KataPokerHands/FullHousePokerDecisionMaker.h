/*
 * FullHousePokerDecisionMaker.h
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#ifndef FULLHOUSEPOKERDECISIONMAKER_H_
#define FULLHOUSEPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

namespace pokerhands {

class FullHousePokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	FullHousePokerDecisionMaker(PokerDecisionMaker*);
	virtual ~FullHousePokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* FULLHOUSEPOKERDECISIONMAKER_H_ */
