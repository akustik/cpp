/*
 * PokerHandsRules.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERHANDSRULES_H_
#define POKERHANDSRULES_H_

#include <string>

using namespace std;

namespace pokerhands {

class PokerHandsRules {
public:
	PokerHandsRules();
	virtual ~PokerHandsRules();

	/**
	 * Chooses the winner of a input string that defines the hands for
	 * two players, white and black.
	 */
	virtual const string chooseWinner(const string) const throw();
};

} /* namespace pokerhands */
#endif /* POKERHANDSRULES_H_ */
