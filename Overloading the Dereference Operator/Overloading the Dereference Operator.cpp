/*
 * Overloading the Dereference Operator.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include "Complex.h"

int main( int argc, char** argv ) {
	caveofprogramming::Complex c1(2, 4);

	std::cout << *c1 << std::endl;

	return 0;
}



