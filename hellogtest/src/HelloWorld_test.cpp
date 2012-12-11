/*
 * HelloWorld_test.cpp
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#include "HelloWorld.h"
#include <string>
#include <vector>
#include <iostream>
#include <gtest.h>
#include "hippomocks.h"
using namespace std;

TEST(GreetingSpecification,
    ShouldGreetAUsername) {
	HelloWorld *helloWorld = new HelloWorld();
		string name = "guillem";
		string greetingText = helloWorld->greeting(name);

		ASSERT_TRUE(greetingText.compare("hello guillem") == 0);
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
