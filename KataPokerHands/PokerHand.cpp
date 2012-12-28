/*
 * PokerHand.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHand.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

namespace pokerhands {

PokerHand::PokerHand(const string owner) {
	_owner = owner;
	_cards = vector<PokerCard>();
}

PokerHand::~PokerHand() {

}

const string PokerHand::owner() const{
	return _owner;
}

const vector<PokerCard> PokerHand::cards() const{
	return _cards;
}

void PokerHand::addCard(const string card){
	_cards.push_back(PokerCard(card));
}

int PokerHand::removeCardsByValue(const int value, const int amount=1){
	int removed = 0;
	vector<PokerCard> remaining;
	vector<PokerCard>::iterator iterator;
	for(iterator = _cards.begin(); iterator !=_cards.end(); iterator++){
		if(iterator->value() == value && removed < amount){
			removed++;
		} else {
			remaining.push_back(*iterator);
		}
	}
	_cards = remaining;
	return removed;
}

bool PokerHand::isHigher(PokerHand& b, string& name){
	vector<PokerCard> aCards = cards();
	vector<PokerCard> bCards = b.cards();
	sort(aCards.begin(), aCards.end());
	sort(bCards.begin(), bCards.end());

	vector<PokerCard>::reverse_iterator aIterator;
	vector<PokerCard>::reverse_iterator bIterator;

	bool higher = false;
	for(bIterator=bCards.rbegin(), aIterator=aCards.rbegin();
			bIterator != bCards.rend() && aIterator != aCards.rend();
			bIterator++, aIterator++){
		if(*bIterator > *aIterator){
			break;
		} else if(*bIterator < *aIterator){
			higher = true;
			name.append(aIterator->name());
			break;
		}
	}

	return higher;
}


} /* namespace pokerhands */
