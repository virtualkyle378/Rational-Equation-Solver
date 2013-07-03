#include <vector>
#include "Operator.h"
#include "Quadratic.h"
#include "Fraction.h"
using namespace std;

bool machine(vector<int> terms, Fraction zero);
vector<int> factor(vector<int> terms, Fraction zero);
vector<Quadratic> calcQuad(int a, int b, int c);

vector<Quadratic> findZeros(vector<int> terms, Fraction possiblezeros[], vector<Quadratic> zeros){
	for(unsigned int i = 0; i < sizeof(possiblezeros)/sizeof(possiblezeros[0]); i++){
		if(machine(terms, possiblezeros[i])){
			zeros.push_back(Quadratic(possiblezeros[i]));
			vector<int> newterms = factor(terms, possiblezeros[i]);
			if(newterms.size() == 3){
				vector<Quadratic> x = calcQuad(newterms.at(0), newterms.at(1), newterms.at(2));
				zeros.insert(zeros.end(), x.begin(), x.end());
			} else {
				findZeros(newterms, possiblezeros, zeros);
			}
		}
	}
	return zeros;
}



bool machine(vector<int> terms, Fraction zero){
	int output = 0;
	int divisor = zero.numerator / zero.denominator;
	for(unsigned int i = 0; i < terms.size(); i++){
		output += terms[i];
		output *= divisor;
	}
	return output == 0;
}

vector<int> factor(vector<int> terms, Fraction zero){
	int output = 0;
	vector<int> out;
	int divisor = zero.numerator / zero.denominator;
	for(unsigned int i = 0; i < terms.size() - 1; i++){
		output += terms[i];
		out.push_back(output);
		output *= divisor;
	}
	return out;
}

vector<Quadratic> calcQuad(int a, int b, int c){
	Quadratic quad(-b, Add, Sqrt(b * b - 4 * a * c), (a*2));
	quad.sqrt.simplify();
	quad.simplify();
	vector<Quadratic> out;
	out.push_back(Quadratic(quad));
	quad.mode = Subtract;
	out.push_back(quad);
	return out;
}
