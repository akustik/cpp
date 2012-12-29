/*
 * PokerCardException.cpp
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#include "PokerCardException.h"

namespace pokerhands {

PokerCardException::PokerCardException(const string message) throw() {
	_message = message;
}

PokerCardException::~PokerCardException() throw(){

}

const char* PokerCardException::what() const throw(){
	return _message.c_str();
}

} /* namespace pokerhands */
