//Fraction simpFrac(Fraction frac);
#include "Fraction.h"

Fraction::Fraction(const Fraction& other){
	numerator = other.numerator;
	denominator = other.denominator;
}

Fraction::Fraction(int numerator, int denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}

Fraction::~Fraction(){

}

bool Fraction::operator==(const Fraction &other){
    return(other.numerator == numerator && other.denominator == denominator);
}


Fraction simpFrac(Fraction frac){
	if(frac.denominator < 0){
		frac.numerator *= -1;
		frac.denominator *= -1;
	}
	bool signinv = frac.numerator < 0;
	if(signinv)
		frac.numerator = frac.numerator * -1;
	for(int i = frac.numerator; i > 1; i--){
		if(frac.numerator % i == 0 && frac.denominator % i == 0){
			frac.numerator /= i;
			frac.denominator /= i;
			break;
		}
	}
	if(signinv)
		frac.numerator = frac.numerator * -1;
	return frac;
}
