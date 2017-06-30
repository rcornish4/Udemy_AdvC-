/*
 * Abstract Classes.cpp
 *
 *  Created on: Jun 30, 2017
 *      Author: rcornish4
 */

#include <iostream>
#include <vector>

class Animal {
public:
	virtual ~Animal() { }
	virtual void speak() = 0;
	virtual void run() = 0;
};

class Dog: public Animal {
public:
	void speak() {
		std::cout << "woof" << std::endl;
	}
};

class Corgi: public Dog {
public:
	Corgi() {
		std::cout << "Corgi constructor" << std::endl;
	}

	void run() {
		std::cout << "they don't run :/" << std::endl;
	}
};

int main( int argc, char** argv ) {
	// This doesn't work after adding the pure virtual run() to Animal
	// Because the pure virtual functions aren't *all* defined in Dog, Dog is now also an abstract class
	// Dog dog

	// This works because Corgi implements run() and inherits speak() from dog, therefore
	// all pure virtual functions of Animal have been defined
	Corgi dog;
	dog.speak();
	dog.run();

	std::vector<Corgi> corgis = { Corgi(), Corgi(), Corgi() };

	std::cout << "\nNumber of corgis: " << corgis.size() << std::endl;

	Animal *animals[5];

	animals[0] = new Corgi();

	Animal *test = animals[0];

	//test->run();
	animals[0]->run();

	Animal **moreAnimals;

	int array_size;
	int second_array_size;

	std::cout << "Enter an array size for both arrays: ";
	std::cin >> array_size >> second_array_size;

	moreAnimals = new Animal*[array_size];

	for ( int i = 0; i < array_size; ++i ) {
		moreAnimals[i] = new Corgi[second_array_size];
	}

	return 0;
}


