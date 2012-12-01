/*
 * HelloWorld.h
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#ifndef HELLOWORLD_H_
#define HELLOWORLD_H_

#include <string>

class HelloWorld {
public:
	HelloWorld();
	virtual ~HelloWorld();

	std::string greeting(std::string name);
};

#endif /* HELLOWORLD_H_ */
