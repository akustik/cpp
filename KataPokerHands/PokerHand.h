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
#include "PokerCardException.h"

using namespace std;

namespace pokerhands {

class PokerHand {
private:
	string _owner;
	vector<PokerCard> _cards;

public:
	PokerHand(string owner);
	virtual ~PokerHand();

	const string owner() const;
	const vector<PokerCard> cards() const;

	void addCard(const string) throw (PokerCardException);
	int removeCardsByValue(const int, const int);

	/**
	 * Returns true if the hand is higher than the one of the parameter.
	 * When higher, appends the deciding card name to the second parameter.
	 */

	bool isHigher(PokerHand&, string&);
};

} /* namespace pokerhands */
#endif /* POKERHAND_H_ */
