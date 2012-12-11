/*
 * HelloWorld_test.cpp
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#include "HelloWorld.h"
#include "FizzBuzz.h"
#include <string>
#include <vector>
#include <iostream>
#include <gtest.h>
#include "hippomocks.h"
using namespace std;
using namespace fizzbuzz;

TEST(GreetingSpecification,
    ShouldGreetAUsername) {
	HelloWorld *helloWorld = new HelloWorld();
		string name = "guillem";
		string greetingText = helloWorld->greeting(name);

		ASSERT_TRUE(greetingText.compare("hello guillem") == 0);
}

TEST(FizzBuzzSpecification, ShouldReturnAHundreadElements){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(100u, values.size()) << "FizzBuzz response hasn't length 100";
}

TEST(FizzBuzzSpecification, FirstElementShouldBeOne){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(string("1"), values[0]) << "FizzBuzz response first word is not one";
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
