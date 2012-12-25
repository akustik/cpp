/*
 * PokerCard.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerCard.h"
#include <string>
#include <ostream>

using namespace std;

namespace pokerhands {

PokerCard::PokerCard(const string card) {
	_card = card;
}

PokerCard::~PokerCard() {

}

const string PokerCard::card() const{
	return _card;
}

ostream& operator<<(ostream& os, const PokerCard& c){
	os << c.card();
	return os;
}

} /* namespace pokerhands */
