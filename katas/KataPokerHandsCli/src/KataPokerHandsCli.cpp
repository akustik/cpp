//============================================================================
// Name        : KataPokerHandsCli.cpp
// Author      : Guillem
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <PokerHandsRules.h>

using namespace std;
using namespace pokerhands;

int main(int argc, char **argv) {
	if(argc == 2){
		string situation(argv[1]);
		PokerHandsRules rules;
		string decision = rules.chooseWinner(situation);
		cout << "Decision: " << decision << endl;
	} else {
		cout << "Usage: <situation>" << endl;
	}

	return 0;
}

