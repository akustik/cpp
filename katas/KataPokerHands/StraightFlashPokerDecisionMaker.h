/*
 * StraightFlashPokerDecisionMaker.h
 *
 *  Created on: Dec 27, 2012
 *      Author: guillem
 */

#ifndef STRAIGHTFLASHPOKERDECISIONMAKER_H_
#define STRAIGHTFLASHPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"
#include <string>

using namespace std;

namespace pokerhands {

class StraightFlashPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	StraightFlashPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~StraightFlashPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* STRAIGHTFLASHPOKERDECISIONMAKER_H_ */
