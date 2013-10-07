/*
 * FizzBuzzPrinter.h
 *
 *  Created on: Dec 24, 2012
 *      Author: guillem
 */

#ifndef FIZZBUZZPRINTER_H_
#define FIZZBUZZPRINTER_H_

#include <vector>
#include <string>

using namespace std;

namespace fizzbuzz {

class FizzBuzzPrinter {
public:
	FizzBuzzPrinter();
	virtual ~FizzBuzzPrinter();
	virtual void print(vector<string>);

};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZPRINTER_H_ */
