/*
 * PokerDecisionMaker.cpp
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#include "PokerDecisionMaker.h"
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

namespace pokerhands {

PokerDecisionMaker::PokerDecisionMaker() {

}

PokerDecisionMaker::~PokerDecisionMaker() {

}

bool PokerDecisionMaker::hasFlash(PokerHand& h){
	vector<PokerCard> cards = h.cards();
	char color = cards[0].color();
	bool hasFlash = true;
	for(unsigned int i=0; i<cards.size(); i++){
		if(cards[i].color() != color){
			hasFlash = false;
			break;
		}
	}

	cout << "Checking flash with " << stringify(cards) << ", " << hasFlash << endl;
	return hasFlash;
}

string PokerDecisionMaker::stringify(vector<PokerCard>& cards){
	string sCards("[");
	for(unsigned int i=0; i<cards.size(); i++){
		sCards.append(cards[i].card());
		sCards.append(" ");
	}
	sCards.append("]");
	return sCards;
}

bool PokerDecisionMaker::hasStraight(PokerHand& h){
	vector<PokerCard> cards = h.cards();
	sort(cards.begin(), cards.end());

	bool hasStraight = true;

	for(unsigned int i=1; i<cards.size(); i++){
		if((cards[i-1].value() + 1) != cards[i].value()){
			hasStraight = false;
			break;
		}
	}

	cout << "Checking straight with " << stringify(cards) << ", " << hasStraight << endl;
	return hasStraight;

}

} /* namespace pokerhands */
