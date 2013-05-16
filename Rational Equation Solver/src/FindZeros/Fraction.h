#ifndef FRACTION_H_
#define FRACTION_H_
#include "Fraction.cpp"

class Fraction;

Fraction::Fraction(const Fraction& other);
Fraction::Fraction(int numerator, int denominator);
Fraction::~Fraction();
bool Fraction::operator==(const Fraction& other);

Fraction simpFrac(Fraction frac);

#endif /* FRACTION_H_ */
