/*
 * Overloading Comparison Operators.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include "Complex.h"

int main( int argc, char** argv ) {
	caveofprogramming::Complex c1(3, 4);
	caveofprogramming::Complex c2(3, 6);

	if (c1 == c2 ) {
		std::cout << "Equal" << std::endl;
	} else {
		std::cout << "Not Equal" << std::endl;
	}

	if (c1 != c2 ) {
		std::cout << "Not Equal" << std::endl;
	} else {
		std::cout << "Equal" << std::endl;
	}

	return 0;
}


