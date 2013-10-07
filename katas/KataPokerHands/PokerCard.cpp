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
#define CARD_UNKNOWN_NAME "unknown"

using namespace std;

namespace pokerhands {

PokerCard::PokerCard(const string card) throw (PokerCardException){
	//TODO: Use a proper regular expression when the compiler allows it
	if(!regex_match(card, regex(CARD_PATTERN, regex_constants::basic))){
		string message("The card format is not valid: ");
		message.append(card);
		throw PokerCardException(message);
	} else {
		_card = card;

		//Check the correctness of the cards
		if(value() == -1){
			string message("The card value is not valid: ");
			message.append(card);
			throw PokerCardException(message);
		}

		if(type() == string(CARD_UNKNOWN_NAME)){
			string message("The card color is not valid: ");
			message.append(card);
			throw PokerCardException(message);
		}
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

const string PokerCard::type() const {
	char symbol = _card[1];
	string name(CARD_UNKNOWN_NAME);
	switch(symbol){
	case 'C':
		name = string("Clubs");
		break;
	case 'D':
		name = string("Diamonds");
		break;
	case 'H':
		name = string("Hearts");
		break;
	case 'S':
		name = string("Spades");
		break;
	}
	return name;
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
	int value = -1;
	std::stringstream ss(_card.substr(0,1));
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
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
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
