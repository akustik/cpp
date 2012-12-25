/*
 * PokerHand.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERHAND_H_
#define POKERHAND_H_
#include <string>
#include <vector>
#include "PokerCard.h"

using namespace std;

namespace pokerhands {

class PokerHand {
private:
	string _owner;
	vector<PokerCard> _cards;

public:
	PokerHand(string owner);
	virtual ~PokerHand();

	const string owner();
	const vector<PokerCard> cards();

	void addCard(const string);
};

} /* namespace pokerhands */
#endif /* POKERHAND_H_ */
