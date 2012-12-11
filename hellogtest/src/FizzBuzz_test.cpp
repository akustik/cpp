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
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(100u, values.size()) << "FizzBuzz response hasn't length 100";
}

TEST(FizzBuzzSpecification, FirstElementShouldBeOne){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(string("1"), values[0]) << "FizzBuzz response first word is not one";
}

TEST(FizzBuzzSpecification, ThirdElementShouldBeThree){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(string("Fizz"), values[2]) << "FizzBuzz response third word is not Fizz";
}

TEST(FizzBuzzSpecification, FifthElementShouldBeBuzz){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(string("Buzz"), values[4]) << "FizzBuzz response fifth word is not Buzz";
}

TEST(FizzBuzzSpecification, FifteenthElementShouldBeFizzBuzz){
	FizzBuzz *fizzBuzz = new FizzBuzz();
	vector<string> values = fizzBuzz->execute();
	ASSERT_EQ(string("FizzBuzz"), values[14]) << "FizzBuzz response fifteenth word is not FizzBuzz";
}

TEST(FizzBuzzSpecification, ExecutionIsQuickEnough){
	time_t start,end;
	time (&start);
	for(unsigned int i=0; i<100000;i++){
		FizzBuzz *fizzBuzz = new FizzBuzz();
		vector<string> values = fizzBuzz->execute();
		delete fizzBuzz;
	}
	time (&end);
	double dif = difftime (end,start);
	ASSERT_TRUE(dif <= 20) << "The test was too slow";
}

//int main(int argc, char **argv) {
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}
