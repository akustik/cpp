/*
 * FizzBuzzException.cpp
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#include "FizzBuzzException.h"
#include <string>
#include <exception>

using namespace std;


namespace fizzbuzz {

FizzBuzzException::FizzBuzzException(string description){
	exception();
	_description = description;
}

FizzBuzzException::~FizzBuzzException() throw(){

}

const char* FizzBuzzException::what() const throw(){
   return "Something happened with the FizzBuzz";
}

string FizzBuzzException::description() const throw(){
	return _description;
}

} /* namespace fizzbuzz */
