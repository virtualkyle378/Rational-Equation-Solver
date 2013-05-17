/*enum Operator{
	Null,
	Add,
	Subtract,
};*/
#include "Quadratic.h"


struct Sqrt {
	int whole;
	int sqrt;
	bool imaginary;
};

struct Quadratic {
	int whole;
	Operator mode;
	Sqrt squrt;
	int denominator;
};


