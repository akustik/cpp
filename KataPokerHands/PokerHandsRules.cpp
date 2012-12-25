/*
 * PokerHandsRules.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHandsRules.h"
#include <string>

using namespace std;

namespace pokerhands {

PokerHandsRules::PokerHandsRules() {

}

PokerHandsRules::~PokerHandsRules() {

}

const string PokerHandsRules::chooseWinner(const string input) const throw(){
	vector<PokerHand> hands = _parser.parse(input);
	if(hands.size() == 2){
		return string("dont know");
	} else {
		return string("Unknown situation");
	}
}


} /* namespace pokerhands */
