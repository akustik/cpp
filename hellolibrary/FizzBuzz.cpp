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
	char** values = new char*[100];
	char* fizzBuzz = new char[9];
	sprintf(fizzBuzz, "FizzBuzz");
	char* fizz = new char [5];
	sprintf(fizz, "Fizz");
	char* buzz = new char [5];
	sprintf(buzz, "Buzz");

	for (unsigned int i = 0; i < 100; i++) {
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
