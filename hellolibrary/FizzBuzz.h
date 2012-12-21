/*
 * FizzBuzz.h
 *
 *  Created on: Dec 11, 2012
 *      Author: guillem
 */

#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <string>
#include <vector>
#include "FizzBuzzResult.h"
using namespace std;

namespace fizzbuzz {

class FizzBuzz {
public:
	FizzBuzz();
	virtual ~FizzBuzz();

	FizzBuzzResult* execute();
	FizzBuzzResult* executeWithArrays(char*);

};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZ_H_ */
