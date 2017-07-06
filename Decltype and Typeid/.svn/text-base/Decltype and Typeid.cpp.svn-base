/*
 * Decltype and Typeid.cpp
 *
 *  Created on: Jul 6, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <typeinfo>		// for typeid

int main ( int argc, char** argv ) {
  std::string value;

  std::cout << typeid(value).name() << std::endl;

  decltype(value) name = "Richard";

  std::cout << typeid(name).name() << ": " << name << std::endl;

  return 0;
}


