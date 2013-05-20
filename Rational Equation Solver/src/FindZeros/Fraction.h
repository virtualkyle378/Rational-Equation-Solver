#ifndef FRACTION_H_
#define FRACTION_H_
//#include "Fraction.cpp"

class Fraction {
public:
	int numerator;
	int denominator;
	Fraction(const Fraction& other);
	Fraction(int numerator, int denominator);
	~Fraction();
	bool operator==(const Fraction& other);
};

Fraction simpFrac(Fraction frac);

#endif /* FRACTION_H_ */
