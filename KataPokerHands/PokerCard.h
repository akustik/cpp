/*
 * PokerCard.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERCARD_H_
#define POKERCARD_H_

#include <string>
#include "PokerCardException.h"

using namespace std;

namespace pokerhands {

class PokerCard {
private:
	string _card;
public:
	PokerCard(const string) throw (PokerCardException);
	virtual ~PokerCard();

	const string card() const;
	const string name() const;
	const string type() const;
	const char color() const;
	const int value() const;

	friend ostream& operator<<(ostream& os, const PokerCard& c);

	friend bool operator==(const PokerCard& lhs, const PokerCard& rhs){ return lhs.value() == rhs.value(); }
	friend bool operator!=(const PokerCard& lhs, const PokerCard& rhs){return !operator==(lhs,rhs);}
	friend bool operator< (const PokerCard& lhs, const PokerCard& rhs){ return lhs.value() < rhs.value(); }
	friend bool operator> (const PokerCard& lhs, const PokerCard& rhs){return  operator< (rhs,lhs);}
	friend bool operator<=(const PokerCard& lhs, const PokerCard& rhs){return !operator> (lhs,rhs);}
	friend bool operator>=(const PokerCard& lhs, const PokerCard& rhs){return !operator< (lhs,rhs);}
};

} /* namespace pokerhands */
#endif /* POKERCARD_H_ */
