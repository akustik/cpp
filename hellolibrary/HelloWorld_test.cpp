/*
 * HelloWorld_test.cpp
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#include "HelloWorld.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	HelloWorld *helloWorld = new HelloWorld();
	string name = "guillem";
	string greetingText = helloWorld->greeting(name);

	if(greetingText.compare("hello guillem") == 0){
		cout << "greeting text passed!" <<endl;
	} else {
		cout << "greeting text FAILED" << endl;
	}
}



