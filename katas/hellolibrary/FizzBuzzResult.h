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

	virtual const char* getValue(int)=0;
	virtual unsigned int getAmount()=0;

	virtual void print();

};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZRESULT_H_ */
