/*
 * PokerHand.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERHAND_H_
#define POKERHAND_H_
#include <string>
#include <vector>

using namespace std;

namespace pokerhands {

class PokerHand {
private:
	string _owner;
	vector<string> _cards;

public:
	PokerHand(string owner, vector<string> cards);
	virtual ~PokerHand();

	const string owner();
	const vector<string> cards();
};

} /* namespace pokerhands */
#endif /* POKERHAND_H_ */
