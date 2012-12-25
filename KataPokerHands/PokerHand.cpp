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

PokerHand::PokerHand(const string owner) {
	_owner = owner;
	_cards = vector<PokerCard>();
}

PokerHand::~PokerHand() {

}

const string PokerHand::owner(){
	return _owner;
}

const vector<PokerCard> PokerHand::cards(){
	return _cards;
}

void PokerHand::addCard(const string card){
	_cards.push_back(PokerCard(card));
}


} /* namespace pokerhands */
