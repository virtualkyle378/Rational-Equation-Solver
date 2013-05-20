/*enum Operator{
	Null,
	Add,
	Subtract,
};*/
#include "Operator.h"
#include "Factor.h"
#include "Fraction.h"

class Sqrt {
public:
	int whole;
	int sqrt;
	bool imaginary;

	Sqrt(){
		this->whole = 0;
		this->sqrt = 0;
		this->imaginary = false;
	}

	Sqrt(int sqrt){
		this->whole = 0;
		this->sqrt = sqrt;
		this->imaginary = false;
	}

	Sqrt(int whole, int sqrt, bool imaginary){
		this->whole = whole;
		this->sqrt = sqrt;
		this->imaginary = imaginary;
	}

	void simplify();

};

void Sqrt::simplify(){
		if(sqrt < 0){
			imaginary = true;
			sqrt *= -1;
		}
		vector<int> factors = findPrimeFactors(sqrt);
		sqrt = 0;
		whole = 0;
		while(factors.size() > 0){
			if(factors.at(0) == factors.at(1)){
				if(whole == 0)
					whole = 1;
				whole += factors.at(0);
				factors.erase(factors.begin(), factors.begin() + 2);
			} else {
				if(sqrt == 0)
					sqrt = 1;
				sqrt += factors.at(0);
				factors.erase(factors.begin(), factors.begin() + 1);
			}
		}
	}

class Quadratic {
public:
	int whole;
	Operator mode;
	Sqrt sqrt;
	int denominator;

	Quadratic(int whole, Operator mode, Sqrt sqrt, int denominator){
		this->whole = whole;
		this->mode = mode;
		this->sqrt = sqrt;
		this->denominator = denominator;
	}

	Quadratic(Fraction frac) {
		this->whole = frac.numerator;
		this->mode = Null;
		this->sqrt = Sqrt(0, 0, false);
		this->denominator = frac.denominator;
	}

	Quadratic(const Quadratic& other) {
		this->whole = other.whole;
		this->mode = other.mode;
		this->sqrt = other.sqrt;
		this->denominator = other.denominator;
	}

	~Quadratic(){

	}

	void simplify();

};

void Quadratic::simplify(){
		//combine numerators if possible
		if(sqrt.sqrt == 0){
			Fraction x = simpFrac(Fraction(whole + sqrt.whole, denominator));
			whole = x.numerator;
			denominator = x.denominator;
		} else {
			for(int i = whole; i > 1; i++){
				if((whole % i == 0) && (denominator % i == 0) && (sqrt.whole % i == 0)){
					whole /= i;
					denominator /= i;
					sqrt.whole /= i;
				}
			}
		}
	}


