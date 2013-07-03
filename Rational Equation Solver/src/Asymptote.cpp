#include <iostream>
#include <vector>
//#include "FindZeros.cpp"//i dont know why this causes errors
#include "AsymptoteType.h"
#include "Asymptote.h"
#include "Fraction.h"
using namespace std;

AsymptoteType findHorozontalAsymptote(vector<int> numerator, vector<int> denominator){
	if(numerator.size() < denominator.size()){
		return yiszero;
	} else if(numerator.size() == denominator.size()) {
		return leadingcoefficents;
	} else if(numerator.size() - denominator.size() == 1){
		return longdivision;
	} else {
		return none;
	}
}

Fraction leadingCoefficents(vector<int> numerator, vector<int> denominator){
	return Fraction(numerator.at(0), denominator.at(0));
}

void trim(vector<int>& vector){
	while(vector.at(vector.size() - 1) == 0){
		vector.pop_back();
	}
}

vector<int> scale(vector<int> vector, int scalefactor){
	vector.insert(vector.begin(),scalefactor,0);
	return vector;
}

vector<int> longDivision(vector<int> numerator, vector<int> denominator){
	vector<int> output(numerator.size());
	do {
		int scalefactor = numerator.size() - denominator.size();
		vector<int> subtractor = scale(denominator, scalefactor);
		int multiply = numerator.at(numerator.size() - 1) / denominator.at(denominator.size() - 1);
		output.at(scalefactor) = multiply;
		for(unsigned int i = 0; i < subtractor.size(); i++){
			subtractor.at(i) *= multiply;
		}
		for(unsigned int i = 0; i < subtractor.size(); i++){
			numerator.at(i) -= subtractor.at(i);
		}
		trim(numerator);
	} while (numerator.size() >= denominator.size());
	trim(output);
	return output;
}
