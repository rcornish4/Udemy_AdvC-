/*
 * Overloading the Assignment Operator.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>

class Test {
private:
	int id;
	std::string name;

public:
	Test() : id(0), name("") { }
	Test(int id, std::string name) : id(id), name(name) { }

	Test( const Test &other ) {
		/*id = other.id;
    name = other.name;*/
		*this = other;
		std::cout << "Copy Constructor running" << std::endl;
	}

	void print() const {
		std::cout << id << ": " << name << std::endl;
	}

	const Test &operator= (const Test &other) {
		std::cout << "Assignment running" << std::endl;

		this->id = other.id;
		this->name = other.name;

		return *this;
	}

	~Test() { std::cout << "Destroying!" << std::endl;}

};

int main( int argc, char** argv ) {
	Test test1(10, "Mike");
	std::cout << "Print test1 " << std::flush;
	test1.print();

	Test test2(20, "Bob");

	test2 = test1;
	std::cout << "Print test2 " << std::flush;
	test2.print();

	Test test3;

	test3.operator=(test2);
	std::cout << "Print test3 " << std::flush;
	test3.print();

	std::cout << std::endl;

	// Copy initialization
	Test test4 = test1;
	test4.print();

	return 0;
}



