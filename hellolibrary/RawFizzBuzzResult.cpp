/*
 * RawFizzBuzzResult.cpp
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#include "RawFizzBuzzResult.h"

namespace fizzbuzz {

RawFizzBuzzResult::RawFizzBuzzResult(int amount, char** values) {
	_amount = amount;
	_values = values;
}

RawFizzBuzzResult::~RawFizzBuzzResult() {
	delete[] _values;
}

char* RawFizzBuzzResult::getValue(int idx){
	return _values[idx];
}

unsigned int RawFizzBuzzResult::getAmount(){
	return _amount;
}

} /* namespace fizzbuzz */
