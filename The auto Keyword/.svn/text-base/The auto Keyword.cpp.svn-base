/*
 * The auto Keyword.cpp
 *
 *  Created on: Jul 6, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <typeinfo>

template <class T, class S>
auto test( T value, S value1 ) -> decltype(value1 + value) {
  return value + value1;
}

int get() {
  return 999;
}

auto test2() -> decltype(get()) {
  return get();
}

int main( int argc, char** argv ) {
  auto value = 7;
  auto text = "hello";

  std::cout << value << std::endl;
  std::cout << text << ": " << sizeof(text) << std::endl;

  std::cout << std::endl;
  std::cout << test(static_cast<std::string>("this is "), static_cast<std::string>("a test!")) << std::endl;

  std::cout << "\n" << test2() << std::endl;
  return 0;
}


