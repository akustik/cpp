/*
 * PokerHandParser.h
 *
 *  Created on: Dec 25, 2012
 *      Author: guillem
 */

#ifndef POKERHANDPARSER_H_
#define POKERHANDPARSER_H_

#include <string>
#include <vector>
#include "PokerHand.h"

using namespace std;
using namespace pokerhands;

namespace pokerhands {

class PokerHandParser {
public:
	PokerHandParser();
	virtual ~PokerHandParser();

	const vector<PokerHand> parse(const string) const;
};

} /* namespace pokerhands */
#endif /* POKERHANDPARSER_H_ */
