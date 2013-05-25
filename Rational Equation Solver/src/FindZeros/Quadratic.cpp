/*enum Operator{
	Null,
	Add,
	Subtract,
};*/
#include "Operator.h"
#include "Fraction.h"
#include "Quadratic.h"
#include <vector>
#include <iostream>
using namespace std;

Sqrt::Sqrt(){
	this->whole = 0;
	this->sqrt = 0;
	this->imaginary = false;
}

Sqrt::Sqrt(int sqrt){
	this->whole = 0;
	this->sqrt = sqrt;
	this->imaginary = false;
}

Sqrt::Sqrt(int whole, int sqrt, bool imaginary){
	this->whole = whole;
	this->sqrt = sqrt;
	this->imaginary = imaginary;
}

vector<int> findPrimeFactors(int num){
	vector<int> out;
	int factor = 2;
	while(num > 1){
		if(num % factor == 0){
			if(num / factor >= 1){
				out.push_back(factor);
				num /= factor;
			}
		} else {
			factor++;
		}
	}
	return out;
}

void Sqrt::simplify(){
	if(sqrt < 0){
		imaginary = true;
		sqrt *= -1;
	}
	vector<int> factors = findPrimeFactors(sqrt);
	sqrt = 0;
	whole = 0;
	while(factors.size() > 0){
		if(factors.size() > 1){
			if(factors.at(0) == factors.at(1)){
				if(whole == 0)
					whole = 1;
				whole *= factors.at(0);
				factors.erase(factors.begin(), factors.begin() + 2);
			} else {
				if(sqrt == 0)
					sqrt = 1;
				sqrt *= factors.at(0);
				factors.erase(factors.begin(), factors.begin() + 1);
			}
		} else {
			cout<<factors.size();
			if(sqrt == 0)
				sqrt = 1;
			sqrt *= factors.at(0);
			factors.erase(factors.begin(), factors.begin() + 1);
			cout<<sqrt<<endl;
		}
	}
}

Quadratic::Quadratic(int whole, Operator mode, Sqrt sqrt, int denominator){
	this->whole = whole;
	this->mode = mode;
	this->sqrt = sqrt;
	this->denominator = denominator;
}

Quadratic::Quadratic(Fraction& frac) {
	this->whole = frac.numerator;
	this->mode = Null;
	this->sqrt = Sqrt(0, 0, false);
	this->denominator = frac.denominator;
}

Quadratic::Quadratic(const Quadratic& other) {
	this->whole = other.whole;
	this->mode = other.mode;
	this->sqrt = other.sqrt;
	this->denominator = other.denominator;
}

Quadratic::~Quadratic(){

}

void Quadratic::simplify(){
	//combine numerators if possible
	if(sqrt.sqrt == 0){
		Fraction x = simpFrac(Fraction(whole + sqrt.whole, denominator));
		sqrt.whole = 0;
		whole = x.numerator;
		denominator = x.denominator;
	} else {
		for(int i = whole; i > 1; i--){
			if((whole % i == 0) && (denominator % i == 0) && (sqrt.whole % i == 0)){
				whole /= i;
				denominator /= i;
				sqrt.whole /= i;
			}
		}
	}
}


