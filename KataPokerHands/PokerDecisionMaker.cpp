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

	cout << "[INFO]" << " Checking flash with " << stringify(cards) << ", " << hasFlash << endl;
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

int PokerDecisionMaker::hasCardsWithSameValue(
		PokerHand& h, unsigned int minimum, int ignore){
	int value = -1;

	vector<PokerCard> cards = h.cards();
	sort(cards.begin(), cards.end());

	unsigned int ocurrences = 1;
	for(unsigned int i=1; i<cards.size(); i++){
		if(cards[i-1].value() == cards[i].value() && cards[i].value() != ignore){
			ocurrences++;
			if(ocurrences >= minimum){
				value = cards[i].value();
				break;
			}
		} else {
			ocurrences = 1;
		}
	}

	cout << "[INFO]" << " Checking " << minimum << " repetitions with " << stringify(cards) << ", " << value << endl;
	return value;
}

bool PokerDecisionMaker::hasStraight(PokerHand& h){
	vector<PokerCard> cards = h.cards();

	bool hasStraight = true;
	if(cards.size() == 5){
		sort(cards.begin(), cards.end());
		for(unsigned int i=1; i<cards.size(); i++){
			if((cards[i-1].value() + 1) != cards[i].value()){
				hasStraight = false;
				break;
			}
		}

	} else {
		hasStraight = false;
	}

	cout << "[INFO]" << " Checking straight with " << stringify(cards) << ", " << hasStraight << endl;
	return hasStraight;

}

} /* namespace pokerhands */
