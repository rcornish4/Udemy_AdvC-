/*
 * Complex.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */
#include <iostream>
#include "Complex.h"

//using namespace caveofprogramming;

/*caveofprogramming::Complex::Complex() : real(0.0), imaginary(0.0) { }

caveofprogramming::Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) { }

caveofprogramming::Complex::Complex( const Complex &other ) {
	*this = other;
}

const caveofprogramming::Complex& caveofprogramming::Complex::operator=( const Complex &other ) {
	return *this;*/

namespace caveofprogramming {

std::ostream &operator<<(std::ostream &out, const Complex &c) {
	out << "(" << c.getReal() << ", " << c.getImaginary() << ")" << std::flush;
	return out;
}

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex &c1, double d) {
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex operator+(double d, const Complex &c1) {
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex::Complex() : real(0), imaginary(0) { }

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) { }

Complex::Complex(const Complex &other) {
	*this = other;
}

const Complex &Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}

bool Complex::operator==(const Complex &rhs) const {

	return (real == rhs.real) && (imaginary == rhs.imaginary);
}

bool Complex::operator!=(const Complex &rhs) const {

	//return (real != rhs.real) || (imaginary != rhs.imaginary);
	return !(*this==rhs);
}

Complex Complex::operator*() const {

	return Complex(real, -imaginary);
}


}  // namespace caveofprogramming

