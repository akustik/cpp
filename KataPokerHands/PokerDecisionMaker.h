/*
 * PokerDecisionMaker.h
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#ifndef POKERDECISIONMAKER_H_
#define POKERDECISIONMAKER_H_

#include <string>
#include "PokerHand.h"

using namespace std;

namespace pokerhands {

class PokerDecisionMaker {
public:
	PokerDecisionMaker();
	virtual ~PokerDecisionMaker();

	/**
	 * Takes a decision for the winner of the given two hands.
	 */
	virtual string decide(PokerHand&, PokerHand&) = 0;
};

} /* namespace pokerhands */
#endif /* POKERDECISIONMAKER_H_ */
