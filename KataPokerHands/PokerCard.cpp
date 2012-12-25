/*
 * PokerCard.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerCard.h"
#include <string>
#include <ostream>
#include <sstream>

namespace pokerhands {

PokerCard::PokerCard(const string card) {
	_card = card;
}

PokerCard::~PokerCard() {

}

const string PokerCard::card() const{
	return _card;
}

const char PokerCard::color() const {
	return _card[1];
}

const int PokerCard::value() const {
	char symbol = _card[0];
	int value = 0;
	switch(symbol){
	case 'T':
		value = 10;
		break;
	case 'J':
		value = 11;
		break;
	case 'Q':
		value = 12;
		break;
	case 'K':
		value = 13;
		break;
	case 'A':
		value = 14;
		break;
	default:
		std::stringstream ss(_card.substr(0,1));
		ss >> value;
		break;
	}

	return value;
}

ostream& operator<<(ostream& os, const PokerCard& c){
	os << c.card();
	return os;
}

} /* namespace pokerhands */
