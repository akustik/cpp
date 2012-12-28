/*
 * ThreeOfAKindPokerDecisionMaker.h
 *
 *  Created on: Dec 28, 2012
 *      Author: guillem
 */

#ifndef THREEOFAKINDPOKERDECISIONMAKER_H_
#define THREEOFAKINDPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"

namespace pokerhands {

class ThreeOfAKindPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	ThreeOfAKindPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~ThreeOfAKindPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* THREEOFAKINDPOKERDECISIONMAKER_H_ */
