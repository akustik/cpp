//============================================================================
// Name        : helloworld.cpp
// Author      : Guillem
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
#include "FizzBuzz.h"
#include "FizzBuzzResult.h"

using namespace std;
using namespace fizzbuzz;

void doRaw(){
	FizzBuzz fizzBuzz;
	FizzBuzzResult* rawResults =fizzBuzz.executeWithArrays();
	delete rawResults;
}

void doVector(){
	FizzBuzz fizzBuzz;
	FizzBuzzResult* vectorResults =fizzBuzz.execute();
	delete vectorResults;
}

int main(int argc, char **argv) {
	if(argc == 3){
		string executionType(argv[1]);
		string sTimes(argv[2]);

		unsigned int iTimes;
		istringstream ( sTimes ) >> iTimes;

		if(executionType.compare(string("VECTOR")) == 0){
			cout << "Computing vector fizzbuzz " << iTimes << " times" << endl;
			for(unsigned int i=0; i<iTimes; i++){
				doVector();
			}
		} else if (executionType.compare(string("RAW")) == 0){
			cout << "Computing raw fizzbuzz " << iTimes << " times" << endl;
			for(unsigned int i=0; i<iTimes; i++){
				doRaw();
			}
		} else {
			cout << "Usage: <type: VECTOR or RAW> <times>: "
					<< "Unknown type: " << executionType  << endl;
		}
	} else {
		cout << "Usage: <type: VECTOR or RAW> <times>" << endl;
	}

	return 0;
}


