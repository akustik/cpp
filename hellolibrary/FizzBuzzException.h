/*
 * FizzBuzzException.h
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#ifndef FIZZBUZZEXCEPTION_H_
#define FIZZBUZZEXCEPTION_H_

#include <exception>

namespace fizzbuzz {

class FizzBuzzException: public std::exception {
public:
	FizzBuzzException();
};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZEXCEPTION_H_ */
