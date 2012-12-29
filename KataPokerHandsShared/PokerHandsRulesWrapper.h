/*
 * PokerHandsRulesWrapper.h
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#ifndef POKERHANDSRULESWRAPPER_H_
#define POKERHANDSRULESWRAPPER_H_

#include <string>

using namespace std;

namespace pokerhands {

class PokerHandsRulesWrapper {
public:
	PokerHandsRulesWrapper();
	virtual ~PokerHandsRulesWrapper();

	/**
	 * Chooses the winner of a input string that defines the hands for
	 * two players, white and black.
	 */
	virtual const string chooseWinner(const string) const throw();
};

} /* namespace pokerhands */
#endif /* POKERHANDSRULESWRAPPER_H_ */
