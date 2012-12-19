//============================================================================
// Name        : helloworld.cpp
// Author      : Guillem
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FizzBuzz.h"
#include "FizzBuzzResult.h"

using namespace std;
using namespace fizzbuzz;

int main(int argc, char **argv) {
	FizzBuzz fizzBuzz;
	FizzBuzzResult* vectorResults = fizzBuzz.execute();
	vectorResults->print();

	FizzBuzzResult* rawResults =fizzBuzz.executeWithArrays();
	rawResults->print();

	delete vectorResults;
	delete rawResults;
}
