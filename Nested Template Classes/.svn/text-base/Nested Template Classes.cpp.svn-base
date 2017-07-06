/*
 * Nested Template Classes.cpp
 *
 *  Created on: Jul 6, 2017
 *      Author: rcornish
 */

#include <iostream>
#include "ring.h"

int main( int argc, char** argv ) {
  ring<std::string> textring(3);

  textring.add("one");
  textring.add("two");
  textring.add("three");
  textring.add("four");

  for( std::string value : textring ) {
      std::cout << value << std::endl;
  }

  std::cout << std::endl;

  for (auto it = textring.begin(); it != textring.end(); it++){
      std::cout << *it << std::endl;
  }

  return 0;
}


