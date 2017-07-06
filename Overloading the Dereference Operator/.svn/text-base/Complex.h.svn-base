/*
 * Complex.h
 *
 *  Created on: Jun 28, 2017
 *      Author: rcornish
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

namespace caveofprogramming {

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	// Copy Constructor
	Complex( const Complex &other );

	double getReal() const {
		return real;
	}

	double getImaginary() const {
		return imaginary;
	}

	const Complex &operator= (const Complex &other);
	bool operator==(const Complex &rhs) const;
	bool operator!=(const Complex &rhs) const;
	Complex operator*() const;

	~Complex() { }
};

std::ostream &operator<<(std::ostream &out, const Complex &other);
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, double d);
Complex operator+(double d, const Complex &c1);
}



#endif /* COMPLEX_H_ */
