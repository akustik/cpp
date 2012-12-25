/*
 * PokerCard.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERCARD_H_
#define POKERCARD_H_

#include <string>

using namespace std;

namespace pokerhands {

class PokerCard {
private:
	string _card;
public:
	PokerCard(const string);
	virtual ~PokerCard();

	const string card() const;

	friend ostream& operator<<(ostream& os, const PokerCard& c);
};

} /* namespace pokerhands */
#endif /* POKERCARD_H_ */
