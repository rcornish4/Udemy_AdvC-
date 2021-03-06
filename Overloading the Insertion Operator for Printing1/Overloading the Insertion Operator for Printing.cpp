/*
 * Overloading the Insertion Operator for Printing.cpp
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
	Test(const Test &other) {
		/*id = other.id;
		name = other.name;*/
		*this = other;
	}

	int getId() const {
		return id;
	}

	std::string getName() const {
		return name;
	}

	const Test &operator= ( const Test &other ) {
		id = other.id;
		name = other.name;

		return *this;
	}

	~Test() { }
};

std::ostream &operator<< (std::ostream &out, const Test &test) {
	out << "ID: " << test.getId() << ", Name: " << test.getName() << std::flush;

	return out;
}

int main( int argc, char** argv ) {
	Test test1(10, "Mike");

	std::cout << test1 << std::endl;
	return 0;
	return 0;
}


