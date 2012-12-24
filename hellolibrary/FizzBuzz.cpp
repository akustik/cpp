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

#define NUMBER_OF_ELEMENTS 100
#define FIZZ_ELEMENT 3
#define BUZZ_ELEMENT 5
#define FIZZ_STRING "Fizz"
#define BUZZ_STRING "Buzz"
#define FIZZBUZZ_STRING "FizzBuzz"

using namespace std;

namespace fizzbuzz {

FizzBuzz::FizzBuzz() {

}

FizzBuzz::~FizzBuzz() {
}

/**
 * Executes the fizzbuzz function backed by raw data types
 */

FizzBuzzResult* FizzBuzz::executeWithArrays(char* values) {
	for (unsigned int i = 0; i < NUMBER_OF_ELEMENTS; i++) {
		bool hasFizz = (i + 1) % FIZZ_ELEMENT == 0;
		bool hasBuzz = (i + 1) % BUZZ_ELEMENT == 0;

		if (hasFizz && hasBuzz) {
			sprintf(&values[i*9], FIZZBUZZ_STRING);
		} else if (hasFizz) {
			sprintf(&values[i*9], FIZZ_STRING);
		} else if (hasBuzz) {
			sprintf(&values[i*9], BUZZ_STRING);
		} else {
			sprintf(&values[i*9],"%d",i+1);
		}
	}

	RawFizzBuzzResult* rawResult = new RawFizzBuzzResult(NUMBER_OF_ELEMENTS, values);

	return rawResult;
}

/**
 * Executes the fizzbuzz function backed by the standard c++ library
 */

FizzBuzzResult* FizzBuzz::execute() {
	vector<string> values(NUMBER_OF_ELEMENTS);

	for (unsigned int i = 0; i < values.size(); i++) {
		bool hasFizz = (i + 1) % FIZZ_ELEMENT == 0;
		bool hasBuzz = (i + 1) % BUZZ_ELEMENT == 0;
		if (hasFizz && hasBuzz) {
			values[i] = string(FIZZBUZZ_STRING);
		} else if (hasFizz) {
			values[i] = string(FIZZ_STRING);
		} else if (hasBuzz) {
			values[i] = string(BUZZ_STRING);
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
