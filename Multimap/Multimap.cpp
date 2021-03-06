/*
 * Multimap.cpp
 *
 *  Created on: Jun 16, 2017
 *      Author: rcornish4
 */

#include <iostream>
#include <map>

int main( int argc, char** argv ) {
	std::multimap<int, std::string> lookup;

	lookup.insert(std::make_pair(30, "Mike"));
	lookup.insert(std::make_pair(10, "Vicky"));
	lookup.insert(std::make_pair(30, "Raj"));
	lookup.insert(std::make_pair(20, "Bob"));

	// for (std::multimap<int, std::string>::iterator it = lookup.begin(); it != lookup.end(); ++it) {
	for (decltype(lookup)::iterator it = lookup.begin(); it != lookup.end(); ++it) {
		std::cout << (*it).first << ": " << it->second << std::endl;
	}

	std::cout << std::endl;

	for (decltype(lookup)::iterator it = lookup.find(20); it != lookup.end(); ++it) {
		std::cout << it->first << ": " << it->second << std::endl;
	}

	std::cout << std::endl;

	//std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(30);
	auto its = lookup.equal_range(30);

	/*for (decltype(lookup)::iterator it = its.first; it != its.second; ++it) {
		std::cout << it->first << ": " << it->second << std::endl;
	}*/

	for (auto it = its.first; it != its.second; ++it) {
			std::cout << it->first << ": " << it->second << std::endl;
	}

	return 0;
}
