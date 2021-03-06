/*
 * Custom Objects as Map Values.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: rcornish4
 */

#include <iostream>
#include <map>

class Person {
private:
	std::string name;
	int age;

public:
	Person() = default;

	Person( std::string name, int age ) :
		name( name ), age( age ) {
	}

	Person( const Person &other ) {
		std::cout << "Copy Constructor running!" << std::endl;
		name = other.name;
		age = other.age;
	}

	void print() const {
		std::cout << name << ": " << age << std::endl;
	}
};

int main( int argc, char** argv ) {
	std::map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	people.insert(std::make_pair(55, Person("Bob", 45)));
	for (std::map<int, Person>::iterator it = people.begin(); it != people.end(); ++it ) {

		std::cout << it->first << ": " << std::flush;
		it->second.print();
	}

	return 0;
}


