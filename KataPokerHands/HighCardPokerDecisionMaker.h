/*
 * HighCardPokerDecisionMaker.h
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#ifndef HIGHCARDPOKERDECISIONMAKER_H_
#define HIGHCARDPOKERDECISIONMAKER_H_

#include "PokerDecisionMaker.h"
#include <string>
#include "PokerHand.h"

using namespace std;

namespace pokerhands {

class HighCardPokerDecisionMaker: public PokerDecisionMaker {
public:
	HighCardPokerDecisionMaker();
	virtual ~HighCardPokerDecisionMaker();

	string decide(PokerHand&, PokerHand&);
};

} /* namespace pokerhands */
#endif /* HIGHCARDPOKERDECISIONMAKER_H_ */
