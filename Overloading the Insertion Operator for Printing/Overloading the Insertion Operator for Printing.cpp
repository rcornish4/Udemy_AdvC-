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

	// Get functions for use with non friend overload of ostream&<<
	int getId() const {
		return id;
	}

	std::string getName() const {
		return name;
	}

	//friend std::ostream &operator<<(std::ostream &out, const Test &test);
	void print() {
		std::cout << "ID: " << id << ", Name: " << name << std::flush;
	}

	~Test() { std::cout << "Destroying!" << std::endl;}

};
// For use with friend declaration
/*std::ostream &operator<< (std::ostream &out, const Test& test) {
  out << "ID: " << test.id << ", Name: " << test.name << std::flush;

  return out;
}*/

//Without friend
std::ostream &operator<< (std::ostream &out, const Test &test) {
	out << "ID: " << test.getId() << ", Name: " << test.getName() << std::flush;

	return out;
}

int main( int argc, char**argv ) {

	Test test1(10, "Mike");

	std::cout << test1 << std::endl;
	return 0;
}


