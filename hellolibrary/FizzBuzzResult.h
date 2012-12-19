/*
 * FizzBuzzResult.h
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#ifndef FIZZBUZZRESULT_H_
#define FIZZBUZZRESULT_H_

namespace fizzbuzz {

class FizzBuzzResult {
public:
	FizzBuzzResult();
	virtual ~FizzBuzzResult();

	virtual char* getValue(int);
	virtual unsigned int getAmount();

	void print();

};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZRESULT_H_ */
