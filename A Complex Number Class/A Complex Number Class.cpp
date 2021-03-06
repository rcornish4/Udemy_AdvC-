/*
 * A Complex Number Class.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include "Complex.h"

/*std::ostream &operator<<( std::ostream &out, const caveofprogramming::Complex &test ) {
	out << "Real: " << test.getReal() << ", Imaginary: " << test.getImaginary() << std::flush;
	return out;
}*/

int main( int argc, char** argv ) {
	caveofprogramming::Complex c1 = caveofprogramming::Complex(2, 3);
	caveofprogramming::Complex c2(c1);

	caveofprogramming::Complex c3;
	c3 = c2;

	std::cout << c2 << " " << c3 << std::endl;
	return 0;
}


