/*
 * HelloWorld_test.cpp
 *
 *  Created on: Dec 1, 2012
 *      Author: guillem
 */

#include "FizzBuzz.h"
#include <string>
#include <vector>
#include <iostream>
#include <gtest.h>
#include <ctime>
#include "hippomocks.h"
using namespace std;
using namespace fizzbuzz;

TEST(FizzBuzzSpecification, ShouldReturnAHundreadElements){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	ASSERT_EQ(100u, result->getAmount()) << "FizzBuzz response hasn't length 100";
	delete result;
}

TEST(FizzBuzzSpecification, FirstElementShouldBeOne){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	ASSERT_STREQ("1", result->getValue(0)) << "FizzBuzz response first word is not one";
	delete result;
}

TEST(FizzBuzzSpecification, ThirdElementShouldBeThree){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	ASSERT_STREQ("Fizz", result->getValue(2)) << "FizzBuzz response third word is not Fizz";
	delete result;
}

TEST(FizzBuzzSpecification, FifthElementShouldBeBuzz){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	ASSERT_STREQ("Buzz", result->getValue(4)) << "FizzBuzz response fifth word is not Buzz";
	delete result;
}

TEST(FizzBuzzSpecification, FifteenthElementShouldBeFizzBuzz){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	ASSERT_STREQ("FizzBuzz", result->getValue(14)) << "FizzBuzz response fifteenth word is not FizzBuzz";
	delete result;
}

TEST(FizzBuzzSpecification, ExecutionIsQuickEnough){
	time_t start,end;
	time (&start);
	FizzBuzz fizzBuzz;
	for(unsigned int i=0; i<100000;i++){
		FizzBuzzResult *result = fizzBuzz.execute();
		delete result;
	}
	time (&end);
	double dif = difftime (end,start);
	ASSERT_TRUE(dif <= 1) << "The test was too slow, took " << dif;
}

TEST(FizzBuzzSpecification, PrintFizzBuzz){
	FizzBuzz fizzBuzz;
	FizzBuzzResult *result = fizzBuzz.execute();
	result->print();
	delete result;
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
