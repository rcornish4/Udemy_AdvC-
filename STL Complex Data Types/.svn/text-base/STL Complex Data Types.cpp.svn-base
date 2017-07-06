/*
 * STL Complex Data Types.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <map>
#include <vector>

int main( int argc, char** argv ) {
	std::map<std::string, std::vector<int> > scores;

	scores["Mike"].push_back(10);
	scores["Mike"].push_back(20);
	scores["Vicky"].push_back(15);

	for (auto it = scores.begin(); it != scores.end(); ++it ) {
		std::string name = it->first;
		std::vector<int> scoreList = it->second;

		std::cout << name << ": " << std::flush;

		/*
    for ( auto it1 = scoreList.begin(); it1 != scoreList.end(); ++it1) {
      std::cout << *it1 << " " << std::flush;
    }*/


		for ( auto it1 = it->second.begin(); it1 != it->second.end(); ++it1) {
			std::cout<< *it1 << " " << std::flush;
		}
		std::cout << std::endl;
	}



	return 0;
}



