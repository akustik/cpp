/*
 * FlashPokerDecisionMaker.h
 *
 *  Created on: Dec 27, 2012
 *      Author: guillem
 */

#ifndef FLASHPOKERDECISIONMAKER_H_
#define FLASHPOKERDECISIONMAKER_H_

#include "DelegatedPokerDecisionMaker.h"
#include <string>

using namespace std;

namespace pokerhands {

class FlashPokerDecisionMaker: public pokerhands::DelegatedPokerDecisionMaker {
public:
	FlashPokerDecisionMaker(PokerDecisionMaker*);
	virtual ~FlashPokerDecisionMaker();

	string decideOrDelegate(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* FLASHPOKERDECISIONMAKER_H_ */
