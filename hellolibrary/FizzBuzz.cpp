/*
 * FizzBuzz.cpp
 *
 *  Created on: Dec 11, 2012
 *      Author: guillem
 */

#include "FizzBuzz.h"
#include <string>
#include <vector>
#include <sstream>
#include <cstdio>
#include <iostream>

using namespace std;

namespace fizzbuzz {

FizzBuzz::FizzBuzz() {
	// TODO Auto-generated constructor stub

}

FizzBuzz::~FizzBuzz() {
	// TODO Auto-generated destructor stub
}

/**
 * Executes the fizzbuzz function backed by raw data types
 */

unsigned int FizzBuzz::executeWithArrays(char** values) {
	unsigned int length = 100;

	char* fizzBuzz = new char[9];
	sprintf(fizzBuzz, "FizzBuzz");
	char* fizz = new char [5];
	sprintf(fizz, "Fizz");
	char* buzz = new char [5];
	sprintf(buzz, "Buzz");

	for (unsigned int i = 0; i < length; i++) {
		bool hasFizz = (i + 1) % 3 == 0;
		bool hasBuzz = (i + 1) % 5 == 0;

		if (hasFizz && hasBuzz) {
			values[i] = fizzBuzz;
		} else if (hasFizz) {
			values[i] = fizz;
		} else if (hasBuzz) {
			values[i] = buzz;
		} else {
			values[i] = new char[4];
			sprintf(values[i],"%d",i+1);
		}
	}

	return length;
}

/**
 * Executes the fizzbuzz function backed by the standard c++ library
 */

vector<string> FizzBuzz::execute() {
	vector<string> values(100);

	for (unsigned int i = 0; i < values.size(); i++) {
		bool hasFizz = (i + 1) % 3 == 0;
		bool hasBuzz = (i + 1) % 5 == 0;
		if (hasFizz && hasBuzz) {
			values[i] = string("FizzBuzz");
		} else if (hasFizz) {
			values[i] = string("Fizz");
		} else if (hasBuzz) {
			values[i] = string("Buzz");
		} else {
			// Default, the number
			std::stringstream ss;
			ss << i + 1;
			values[i] = ss.str();
		}
	}

	return values;
}

void FizzBuzz::printArrayResponse(char** values){
	cout << "array address" << values << endl;
	for(unsigned int i=0; i<100; i++){
		cout << "address " << i << " => " << values[i] << endl;
	}
}

} /* namespace fizzbuzz */
