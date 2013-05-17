#include <vector>
#include "Quadratic.h"
#include "Fraction.h"
using namespace std;

vector<Quadratic> findZeros(int terms[], Fraction possiblezeros[], vector<Quadratic> Zeros){
	for(unsigned int i = 0; i < sizeof(terms)/sizeof(terms[0]); i++){
		if(true){

		}
	}
	return Zeros;
}

bool machine(int terms[], Fraction zero){
	int output = 0;
	int divisor = zero.numerator / zero.denominator;
	for(unsigned int i = 0; i < sizeof(terms)/sizeof(terms[0]); i++){
		output += terms[i];
		output *= divisor;
	}
	return output == 0;
}

vector<int> factor(int terms[], Fraction zero){
	int output = 0;
	vector<int> out;
	int divisor = zero.numerator / zero.denominator;
	for(unsigned int i = 0; i < (sizeof(terms)/sizeof(terms[0])) - 1; i++){
		output += terms[i];
		out.push_back(output);
		output *= divisor;
	}
	return out;
}

Quadratic fracToQuad(Fraction fraction){
	return Quadratic{fraction.numerator, Null, Sqrt{0, 0, false,}, fraction.denominator};
}


