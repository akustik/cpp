/*
 * PokerHandParser.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#include "PokerHandParser.h"
#include <string>
#include <set>
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
	  pair<set<string>::iterator,bool> ret;
	  set<string> duplicatesChecker;

	  while (os >> temp){
		  if(temp.find_first_of(':') != string::npos){
			  //there is a new owner, add it to the hand and update the idx
			  string owner = temp.substr(0, temp.size() - 1);
			  PokerHand hand(owner);
			  hands.push_back(hand);
		  } else {
			  //It is a card for the given hand
			  if(hands.size() > 0){
				  ret = duplicatesChecker.insert(temp);
				  if(ret.second){
					  hands[hands.size() - 1].addCard(temp);
				  } else {
					  string message("The card already exists: ");
					  message.append(temp);
					  throw PokerCardException(message);
				  }
			  }
		  }
	  }

	  return hands;
}

} /* namespace pokerhands */
