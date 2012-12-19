/*
 * VectorFizzBuzzResult.h
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#ifndef VECTORFIZZBUZZRESULT_H_
#define VECTORFIZZBUZZRESULT_H_

#include "FizzBuzzResult.h"
#include <string>
#include <vector>

using namespace std;

namespace fizzbuzz {

class VectorFizzBuzzResult: public fizzbuzz::FizzBuzzResult {
private:
	vector<string> _values;

public:
	VectorFizzBuzzResult(vector<string>);
	virtual ~VectorFizzBuzzResult();

	const char* getValue(int);
	unsigned int getAmount();
	void print();
};

} /* namespace fizzbuzz */
#endif /* VECTORFIZZBUZZRESULT_H_ */
