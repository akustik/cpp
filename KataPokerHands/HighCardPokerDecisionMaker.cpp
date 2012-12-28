/*
 * HighCardPokerDecisionMaker.cpp
 *
 *  Created on: Dec 26, 2012
 *      Author: guillem
 */

#include "HighCardPokerDecisionMaker.h"

#include "PokerDecisionMaker.h"
#include <string>
#include "PokerHand.h"
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

namespace pokerhands {

HighCardPokerDecisionMaker::HighCardPokerDecisionMaker() {

}

HighCardPokerDecisionMaker::~HighCardPokerDecisionMaker() {

}

string HighCardPokerDecisionMaker::decide(PokerHand& a, PokerHand& b){
	//default response is tie
	string response = string("Tie.");
	string name = string("");

	if(a.isHigher(b, name)){
		stringstream ss;
		ss << a.owner() << " wins. - with high card: " << name;
		response = ss.str();
	} else if(b.isHigher(a, name)){
		stringstream ss;
		ss << b.owner() << " wins. - with high card: " << name;
		response = ss.str();
	}

	return response;

}

} /* namespace pokerhands */
