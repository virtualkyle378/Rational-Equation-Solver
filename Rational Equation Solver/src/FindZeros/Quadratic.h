#ifndef QUADRATIC_H_
#define QUADRATIC_H_
//#include "Quadratic.cpp"
#include "Fraction.h"


class Sqrt {
public:
	int whole;
	int sqrt;
	bool imaginary;

	Sqrt();

	Sqrt(int sqrt);

	Sqrt(int whole, int sqrt, bool imaginary);

	void simplify();

};

class Quadratic {
public:
	int whole;
	Operator mode;
	Sqrt sqrt;
	int denominator;

	Quadratic(int whole, Operator mode, Sqrt sqrt, int denominator);

	Quadratic(Fraction& frac);

	Quadratic(const Quadratic& other);

	~Quadratic();

	void simplify();

};

#endif /* QUADRATIC_H_ */
