/*
 * HelloWorld.cpp
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#include "HelloWorld.h"
#include <iostream>
#include <string>
using namespace std;

HelloWorld::HelloWorld() {
	// TODO Auto-generated constructor stub

}

HelloWorld::~HelloWorld() {
	// TODO Auto-generated destructor stub
}

std::string HelloWorld::greeting(std::string name) {
	string *greetingText = new string();
	greetingText->append("hello ");
	greetingText->append(name);
	return *greetingText;
}

