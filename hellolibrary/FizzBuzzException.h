/*
 * FizzBuzzException.h
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#ifndef FIZZBUZZEXCEPTION_H_
#define FIZZBUZZEXCEPTION_H_

#include <exception>
#include <string>

using namespace std;

namespace fizzbuzz {

class FizzBuzzException: public std::exception {
private:
	string _description;
public:
	FizzBuzzException(string);
	virtual ~FizzBuzzException() throw();
	virtual const char* what() const throw();
	string description() const throw();
};

} /* namespace fizzbuzz */
#endif /* FIZZBUZZEXCEPTION_H_ */
