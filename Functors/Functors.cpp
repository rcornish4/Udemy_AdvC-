/*
 * Functors.cpp
 *
 *  Created on: Jun 30, 2017
 *      Author: rcornish4
 */

#include <iostream>

struct Test {
	virtual ~Test() {}
	virtual bool operator()( std::string &text ) = 0;

};

// functor is a class or a struct that overloads the operator()
struct MatchTest: public Test {
	virtual bool operator()( std::string &text ) {
		return text == "lion";
	}
};

void check( std::string text, Test &test ) {
	if( test( text ) ) {
		std::cout << "Text matches!" << std::endl;
	} else {
		std::cout << "No match!" << std::endl;
	}
}

int main( int argc, char** argv ) {
	MatchTest pred;

	std::string value = "lion";

	std::cout << pred(value) << std::endl;

	std::cout << "Passing functor: " << std::endl;
	//check( value, pred );
	check( value, pred );
	return 0;
}


