/*
 * Using Function Pointers.cpp
 *
 *  Created on: Jun 30, 2017
 *      Author: rcornish4
 */

#include <iostream>
#include <algorithm>  // for std::count_if()
#include <vector>

bool match( std::string test ) {
	//return test == "two";
	return test.size() == 3;
}

int countStrings( std::vector<std::string> &texts, bool (*match)( std::string test ) ) {
	int count = 0;

	for (std::string text : texts ) {
		if ( match( text ) ) {
			count++;
		}
	}

	return count;
}

int main( int argc, char** argv ) {
	std::vector<std::string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	std::cout << match( "one" ) << std::endl;

	std::cout << std::count_if( texts.begin(), texts.end(), match ) << std::endl;

	std::cout << countStrings( texts, match ) << std::endl;

	return 0;
}


