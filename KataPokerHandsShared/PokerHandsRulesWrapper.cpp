/*
 * PokerHandsRulesWrapper.cpp
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#include "PokerHandsRulesWrapper.h"

#include "PokerHandsRules.h"

namespace pokerhands {

PokerHandsRulesWrapper::PokerHandsRulesWrapper() {

}

PokerHandsRulesWrapper::~PokerHandsRulesWrapper() {

}

const string PokerHandsRulesWrapper::chooseWinner(const string situation) const throw(){
	PokerHandsRules rules;
	return rules.chooseWinner(situation);
}

} /* namespace pokerhands */
