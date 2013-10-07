#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"
#include "HelloWorld.h"
#include <string>
using namespace std;


void greetingTest() {
	HelloWorld *helloWorld = new HelloWorld();
	string greetingText = helloWorld->greeting("guillem");
	ASSERT_EQUALM("The greeting is wrong", "hello guillem", greetingText);
}

void runSuite(){
	cute::suite s;
	//TODO add your test here
	s.push_back(CUTE(greetingTest));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "The Suite");
}

int main(){
    runSuite();
    return 0;
}



