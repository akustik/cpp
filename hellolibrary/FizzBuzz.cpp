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

	for (unsigned int i = 0; i < length; i++) {
		bool hasFizz = (i + 1) % 3 == 0;
		bool hasBuzz = (i + 1) % 5 == 0;
		values[i] = new char[9];
		if (hasFizz && hasBuzz) {
			sprintf(values[i],"FizzBuzz");
		} else if (hasFizz) {
			sprintf(values[i],"Fizz");
		} else if (hasBuzz) {
			sprintf(values[i],"Buzz");
		} else {
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

} /* namespace fizzbuzz */
