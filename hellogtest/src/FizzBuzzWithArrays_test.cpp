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

TEST(FizzBuzzSpecificationWithArrays, ShouldReturnAHundreadElements){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	char** values = new char*[100];
	unsigned int size = fizzBuzz->executeWithArrays(values);
	ASSERT_EQ(100u, size) << "FizzBuzz response hasn't length 100";
	//fizzBuzz->printArrayResponse(values);
	delete[] values;
	//fizzBuzz->printArrayResponse(values);
	delete fizzBuzz;
}

TEST(FizzBuzzSpecificationWithArrays, FirstElementShouldBeOne){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	char** values = new char*[100];
	fizzBuzz->executeWithArrays(values);
	ASSERT_STREQ("1", values[0]) << "FizzBuzz response first word is not one";
	delete[] values;
	delete fizzBuzz;
}

TEST(FizzBuzzSpecificationWithArrays, ThirdElementShouldBeThree){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	char** values = new char*[100];
	fizzBuzz->executeWithArrays(values);
	ASSERT_STREQ("Fizz", values[2]) << "FizzBuzz response third word is not Fizz";
	delete[] values;
	delete fizzBuzz;
}

TEST(FizzBuzzSpecificationWithArrays, FifthElementShouldBeBuzz){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	char** values = new char*[100];
	fizzBuzz->executeWithArrays(values);
	ASSERT_STREQ("Buzz", values[4]) << "FizzBuzz response fifth word is not Buzz";
	delete[] values;
	delete fizzBuzz;
}

TEST(FizzBuzzSpecificationWithArrays, FifteenthElementShouldBeFizzBuzz){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	char** values = new char*[100];
	fizzBuzz->executeWithArrays(values);
	ASSERT_STREQ("FizzBuzz", values[14]) << "FizzBuzz response fifteenth word is not FizzBuzz";
	delete[] values;
	delete fizzBuzz;
}

TEST(FizzBuzzSpecificationWithArrays, ExecutionIsQuickEnough){
	time_t start,end;
	time (&start);
	for(unsigned int i=0; i<100000;i++){
		FizzBuzz *fizzBuzz = new FizzBuzz();
		char** values = new char*[100];
		fizzBuzz->executeWithArrays(values);
		delete[] values;
		delete fizzBuzz;
	}
	time (&end);
	double dif = difftime (end,start);
	ASSERT_TRUE(dif <= 1) << "The test was too slow, took " << dif;
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
