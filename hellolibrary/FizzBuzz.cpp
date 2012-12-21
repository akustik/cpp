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
#include "FizzBuzzResult.h"
#include "RawFizzBuzzResult.h"
#include "VectorFizzBuzzResult.h"

using namespace std;

namespace fizzbuzz {

FizzBuzz::FizzBuzz() {
}

FizzBuzz::~FizzBuzz() {
}

/**
 * Executes the fizzbuzz function backed by raw data types
 */

FizzBuzzResult* FizzBuzz::executeWithArrays() {
	char* values = new char[100*9];
	for (unsigned int i = 0; i < 100; i++) {
		bool hasFizz = (i + 1) % 3 == 0;
		bool hasBuzz = (i + 1) % 5 == 0;

		if (hasFizz && hasBuzz) {
			sprintf(&values[i*9], "FizzBuzz");
		} else if (hasFizz) {
			sprintf(&values[i*9], "Fizz");
		} else if (hasBuzz) {
			sprintf(&values[i*9], "Buzz");
		} else {
			sprintf(&values[i*9],"%d",i+1);
		}
	}

	RawFizzBuzzResult* rawResult = new RawFizzBuzzResult(100, values);

	return rawResult;
}

/**
 * Executes the fizzbuzz function backed by the standard c++ library
 */

FizzBuzzResult* FizzBuzz::execute() {
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

	VectorFizzBuzzResult* result = new VectorFizzBuzzResult(values);
	return result;
}
} /* namespace fizzbuzz */
