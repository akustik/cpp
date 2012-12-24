/*
 * FizzBuzzException.cpp
 *
 *  Created on: Dec 19, 2012
 *      Author: guillem
 */

#include "FizzBuzzException.h"

namespace fizzbuzz {

FizzBuzzException::FizzBuzzException() {

}

const char* FizzBuzzException::what() const throw(){
   return "Something happened with the FizzBuzz";
}

} /* namespace fizzbuzz */
