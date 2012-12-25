/*
 * PokerHand.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHand.h"
#include <string>
#include <vector>

using namespace std;

namespace pokerhands {

PokerHand::PokerHand(const string owner, const vector<string> cards) {
	_owner = owner;
	_cards = cards;
}

PokerHand::~PokerHand() {

}

const string PokerHand::owner(){
	return _owner;
}

const vector<string> PokerHand::cards(){
	return _cards;
}

void PokerHand::addCard(const string card){
	_cards.push_back(card);
}


} /* namespace pokerhands */
