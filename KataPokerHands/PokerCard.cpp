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
#include <regex>
#include <exception>
#include "PokerCardException.h"

#define CARD_PATTERN ".."

using namespace std;

namespace pokerhands {

PokerCard::PokerCard(const string card) throw (PokerCardException){
	if(!regex_match(card, regex(CARD_PATTERN, regex_constants::basic))){
		throw PokerCardException(card);
	} else {
		_card = card;
	}
}

PokerCard::~PokerCard() {

}

const string PokerCard::card() const{
	return _card;
}

const char PokerCard::color() const {
	return _card[1];
}

const string PokerCard::name() const {
	char symbol = _card[0];
	string name;
	switch(symbol){
	case 'T':
		name = string("10");
		break;
	case 'J':
		name = string("Jack");
		break;
	case 'Q':
		name = string("Queen");
		break;
	case 'K':
		name = string("King");
		break;
	case 'A':
		name = string("Ace");
		break;
	default:
		name = _card.substr(0,1);
		break;
	}

	return name;
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
