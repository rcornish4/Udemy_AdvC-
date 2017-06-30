/*
 * Template Functions and Type Inference.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>

template<typename T>
void print(T n) {
	std::cout << "Template version: " << n << std::endl;
}

void print(int value) {
	std::cout << "Non-template version: " << value << std::endl;
}

template<typename T>
void show() {
	std::cout << T() << std::endl;
}

int main( int argc, char** argv ) {
	print<std::string>("Hello");
	print<int>(5);

	print("Hi There");

	print(6);

	print<typeof(5)>(15);

	show<double>();

	return 0;
}


