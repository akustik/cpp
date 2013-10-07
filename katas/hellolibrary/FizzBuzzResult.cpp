/*
 * FizzBuzzResult.cpp
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#include "FizzBuzzResult.h"
#include "FizzBuzzException.h"
#include <iostream>

using namespace std;

namespace fizzbuzz {

FizzBuzzResult::FizzBuzzResult() {
}

FizzBuzzResult::~FizzBuzzResult() {
}

void FizzBuzzResult::print(){
	for(unsigned int i=0; i<getAmount(); i++){
		cout << "\tidx " << i << " => " << getValue(i) << endl;
	}
}

} /* namespace fizzbuzz */
