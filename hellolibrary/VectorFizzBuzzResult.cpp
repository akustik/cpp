/*
 * VectorFizzBuzzResult.cpp
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#include "VectorFizzBuzzResult.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

namespace fizzbuzz {

VectorFizzBuzzResult::VectorFizzBuzzResult(vector<string> values) {
	_values = vector<string>(values);
}

VectorFizzBuzzResult::~VectorFizzBuzzResult() {

}

const char* VectorFizzBuzzResult::getValue(int idx){
	return _values[idx].c_str();
}

unsigned int VectorFizzBuzzResult::getAmount(){
	return _values.size();
}

void VectorFizzBuzzResult::print(){
	cout << "VectorFizzBuzzResult" << endl;
	FizzBuzzResult::print();
}

vector<string> VectorFizzBuzzResult::getValues(){
	return _values;
}

} /* namespace fizzbuzz */
