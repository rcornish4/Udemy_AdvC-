/*
 * Function Pointers.cpp
 *
 *  Created on: Jun 30, 2017
 *      Author: rcornish4
 */

#include <iostream>

void test( int value ) {
	std::cout << "Hello " << value << std::endl;

}

int main( int argc, char** argv ) {
	test( 7 );

	void (*pTest)( int ) = test;

	//pTest = test;

	pTest( 8 );

	return 0;
}


