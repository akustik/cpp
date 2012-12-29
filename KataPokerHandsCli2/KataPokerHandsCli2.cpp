/*
 * KataPokerHandsCli2.cpp
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#include <iostream>
#include "PokerHandsRulesWrapper.h"

using namespace std;
using namespace pokerhands;

int main(int argc, char **argv) {
	if(argc == 2){
		string situation(argv[1]);
		PokerHandsRulesWrapper rules;
		string decision = rules.chooseWinner(situation);
		cout << "Decision: " << decision << endl;
	} else {
		cout << "Usage: <situation>" << endl;
	}

	return 0;
}


