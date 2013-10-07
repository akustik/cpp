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

	/**
	 * Decides whether a hand contains a flash
	 */
	bool hasFlash(PokerHand&);

	/**
	 * Decides whether a hand contains a straight
	 */
	bool hasStraight(PokerHand&);

	/**
	 * Logs a set of cards
	 */
	string stringify(vector<PokerCard>&);

	/**
	 * Returns the value of the set of cards provided it reaches
	 * the specified minimum of cards and changes the hand cards
	 * with the remaining ones. Returns -1 otherwise.
	 *
	 * When the last parameter is set, a card that matches the provided
	 * value is ignored.
	 */

	int hasCardsWithSameValue(PokerHand&, unsigned int=2, int=-1);

};

} /* namespace pokerhands */
#endif /* POKERDECISIONMAKER_H_ */
