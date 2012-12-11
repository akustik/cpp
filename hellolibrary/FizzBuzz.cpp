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
using namespace std;

namespace fizzbuzz {

FizzBuzz::FizzBuzz() {
	// TODO Auto-generated constructor stub

}

FizzBuzz::~FizzBuzz() {
	// TODO Auto-generated destructor stub
}

std::vector<std::string> FizzBuzz::execute() {
	std::vector<std::string> values(100);

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
