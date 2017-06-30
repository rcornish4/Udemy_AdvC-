/*
 * Sets.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <set>

class Person {
public:
	Person() : name(""), age(0) { }
	Person(std::string o_name = "", int o_age = 0) :
		name( o_name ), age( o_age ) {  }

	void print() const {
		std::cout << "Name: " << name << ", age: " << age;
	}

	bool operator< (const Person &other) const {
		//if ( name == other.name ) {
		//  return age < other.age;
		//} else {
		return name < other.name;
		//}
	}

private:
	std::string name;
	int age;
};

int main( int argc, char** argv ) {
	std::set<int> numbers;

	for ( int i = 0; i < 10; ++i ) {
		numbers.insert(i);
	}

	for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
		std::cout << "Element: " << *it << std::endl;
	}

	std::set<Person> people;

	people.insert(Person("Richard", 35));
	people.insert(Person("Jacqueline", 25));
	people.insert(Person("Eleanor", 1));

	for( std::set<Person>::iterator it = people.begin(); it != people.end(); ++it ) {
		it->print();
		std::cout << std::endl;
	}

	std::set<Person>::iterator itFind = people.find(Person("Jacqueline"));

	if (itFind != people.end()) {
		std::cout << "Found!" << std::endl;
	}

	return 0;
}



