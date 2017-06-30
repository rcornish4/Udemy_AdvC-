/*
 * Stack and Queue.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <stack>
#include <queue>

class Test {
private:
	std::string name;

public:
	Test(std::string name) :
		name(name) { }

	~Test() {
		//std::cout << name << " destroyed!" << std::endl;
	}

	void print() const {
		std::cout << name << std::endl;
	}
};

int main( int argc, char** argv ) {
	std::stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));
	testStack.push(*(new Test("Richard")));

	/*
  Test &test1 = testStack.top();
  test1.print();
	 */

	while(testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	std::cout << std::endl;

	std::queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));
	testQueue.push(*(new Test("Richard")));

	while( testQueue.size() > 0 ) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}



