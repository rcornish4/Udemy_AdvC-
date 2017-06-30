/*
 * Object Slicing and Polymorphism.cpp
 *
 *  Created on: Jun 30, 2017
 *      Author: rcornish4
 */

#include <iostream>

class Parent {
private:
	int one;

public:
	Parent(): one(0) {}

	Parent(const Parent &other ): one(0) {
		one = other.one;
		std::cout << "Parent copy constructor" << std::endl;
	}

	virtual void print() {
		std::cout << "parent" << std::endl;
	}

	virtual ~Parent() { }
};

class Child : public Parent {
private:
	int two;
public:
	Child(): two() { }
	void print() {
		std::cout << "child" << std::endl;
	}
};

int main( int argc, char** argv ) {
	Child c1;
	Parent *p1 = &c1;

	p1->print();

	Parent p2 = Child();
	p2.print();

	return 0;
}


