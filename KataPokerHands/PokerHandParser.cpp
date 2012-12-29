/*
 * PokerHandParser.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHandParser.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "PokerHand.h"
#include "PokerCardException.h"

using namespace std;
using namespace pokerhands;

namespace pokerhands {

PokerHandParser::PokerHandParser() {

}

PokerHandParser::~PokerHandParser() {

}

const vector<PokerHand> PokerHandParser::parse(const string input) const throw(PokerCardException){
	  vector<PokerHand> hands;
	  stringstream os(input);
	  string temp;

	  while (os >> temp){
		  if(temp.find_first_of(':') != string::npos){
			  //there is a new owner, add it to the hand and update the idx
			  string owner = temp.substr(0, temp.size() - 1);
			  PokerHand hand(owner);
			  hands.push_back(hand);
		  } else {
			  //It is a card for the given hand
			  if(hands.size() > 0){
				  hands[hands.size() - 1].addCard(temp);
			  }
		  }
	  }

	  return hands;
}

} /* namespace pokerhands */
