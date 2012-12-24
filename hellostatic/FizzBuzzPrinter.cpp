/*
 * FizzBuzzPrinter.cpp
 *
 *  Created on: Dec 24, 2012
 *      Author: guillem
 */

#include "FizzBuzzPrinter.h"
#include <iostream>

using namespace std;

namespace fizzbuzz {

FizzBuzzPrinter::FizzBuzzPrinter() {

}

FizzBuzzPrinter::~FizzBuzzPrinter() {

}

void FizzBuzzPrinter::print(vector<string> result){
	cout << "FizzBuzz [";
	for (vector<string>::iterator it = result.begin(); it!=result.end(); ++it) {
	    cout << *it;
	}
	cout << endl;
}

} /* namespace fizzbuzz */
