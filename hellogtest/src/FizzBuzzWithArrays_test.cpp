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
#include "FizzBuzzResult.h"
#include <exception>
using namespace std;
using namespace fizzbuzz;

TEST(FizzBuzzSpecificationWithArrays, ShouldReturnAHundreadElements){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	ASSERT_EQ(100u, result->getAmount()) << "FizzBuzz response hasn't length 100";
	delete result;
	delete[] values;
}

TEST(FizzBuzzSpecificationWithArrays, FirstElementShouldBeOne){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	ASSERT_STREQ("1", result->getValue(0)) << "FizzBuzz response first word is not one";
	delete result;
	delete[] values;
}

TEST(FizzBuzzSpecificationWithArrays, ThirdElementShouldBeThree){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	ASSERT_STREQ("Fizz", result->getValue(2)) << "FizzBuzz response third word is not Fizz";
	delete result;
	delete[] values;
}


TEST(FizzBuzzSpecificationWithArrays, FifthElementShouldBeBuzz){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	ASSERT_STREQ("Buzz", result->getValue(4)) << "FizzBuzz response fifth word is not Buzz";
	delete result;
	delete[] values;
}


TEST(FizzBuzzSpecificationWithArrays, FifteenthElementShouldBeFizzBuzz){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	ASSERT_STREQ("FizzBuzz", result->getValue(14)) << "FizzBuzz response fifteenth word is not FizzBuzz";
	delete result;
	delete[] values;
}


TEST(FizzBuzzSpecificationWithArrays, ExecutionIsQuickEnough){
	time_t start,end;
	time (&start);
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	for(unsigned int i=0; i<100000;i++){
		FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
		delete result;
	}
	delete[] values;
	time (&end);
	double dif = difftime (end,start);
	ASSERT_TRUE(dif <= 1) << "The test was too slow, took " << dif;
}

TEST(FizzBuzzSpecificationWithArrays, PrintFizzBuzz){
	FizzBuzz fizzBuzz;
	char* values = new char[100*9];
	FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
	result->print();
	delete result;
}

TEST(FizzBuzzSpecificationWithArrays, ShouldRaiseAnException){
	FizzBuzz fizzBuzz;
	char* values = NULL;
	try {
		FizzBuzzResult *result = fizzBuzz.executeWithArrays(values);
		delete result;
	} catch(exception& e){
		ASSERT_STREQ("Something happened with the FizzBuzz", e.what())
				<< "The raised exception is wrong";
	}
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
