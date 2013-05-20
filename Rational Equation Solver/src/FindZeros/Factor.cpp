#include <vector>
#include <algorithm>
#include "Fraction.h"
using namespace std;

vector<int> factorNumber(int num){
	vector<int> factors;
	for(int x = 1; x < num + 1; x++){
		for(int y = 1; y < num + 1; y++){
			if(x*y == num){
				factors.push_back(y);
			}
		}
	}
	Fraction x(5,3);
	return factors;
}

vector<Fraction> pairFactors(vector<int> factor1, vector<int> factor2){
	vector<Fraction> fractions (6, Fraction(5,3));
	for (unsigned int x = 0; x < factor1.size(); x++) {
		for (unsigned int y = 0; y < factor2.size(); ++y) {
			Fraction fraction = simpFrac(Fraction(factor1.at(x), factor2.at(y)));
			//Fraction fraction(5,3);
			if(find(fractions.begin(), fractions.end(), fraction) == fractions.end()){
				fractions.push_back(fraction);
				fractions.push_back(Fraction(fraction.numerator *= -1, fraction.denominator));
			}// if the fraction does not currently exist, append the + and - of the fraction
		}
	}
	return fractions;
}

