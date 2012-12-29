/*
 * PokerCardException.h
 *
 *  Created on: Dec 29, 2012
 *      Author: guillem
 */

#ifndef POKERCARDEXCEPTION_H_
#define POKERCARDEXCEPTION_H_

#include <exception>
#include <string>

using namespace std;

namespace pokerhands {

class PokerCardException: public std::exception {
private:
	string _message;
public:
	PokerCardException(const string) throw();
	virtual ~PokerCardException() throw();

	virtual const char* what() const throw();
};

} /* namespace pokerhands */
#endif /* POKERCARDEXCEPTION_H_ */
