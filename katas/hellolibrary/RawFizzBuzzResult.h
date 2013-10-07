/*
 * RawFizzBuzzResult.h
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#ifndef RAWFIZZBUZZRESULT_H_
#define RAWFIZZBUZZRESULT_H_

#include "FizzBuzzResult.h"

namespace fizzbuzz {

class RawFizzBuzzResult: public FizzBuzzResult {
private:
	int _amount;
	char* _values;
public:
	RawFizzBuzzResult(int, char*);
	virtual ~RawFizzBuzzResult();

	const char* getValue(int);
	unsigned int getAmount();
	void print();
};

} /* namespace fizzbuzz */
#endif /* RAWFIZZBUZZRESULT_H_ */
