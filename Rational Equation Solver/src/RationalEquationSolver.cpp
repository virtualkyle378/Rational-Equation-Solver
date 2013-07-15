#include <iostream>
#include <vector>
#include <Fraction.h>
#include <Operator.h>
#include <Quadratic.h>
#include <Factor.h>
#include <Asymptote.h>
#include <AsymptoteType.h>
using namespace std;

//int findLimit(vector<int> numerator, vector<int> denominator);

int main(){
//	Quadratic x(5,Null,Sqrt(0,27,false),4);
//	x.sqrt.simplify();
//	x.simplify();
//	cout<<x.whole<<" "<<x.mode<<" "<<x.sqrt.whole<<"\("<<x.sqrt.sqrt<< endl;
//	cout<<x.denominator;

	cout << "Rational Equation Solver" << endl;
	cout << "Enter in the highest exponent in the numerator" << endl;
	int terms, temp;
	cin >> terms;
	vector<int> numerator;
	for (int i = terms; i >= 0; i--) {
		cout << "Enter in the value of the number with exponent value of " << i << endl;
		cin >> temp;
		numerator.push_back(temp);
	}
	cout << "Enter in the highest exponent in the denominator" << endl;
	cin >> terms;
	vector<int> denominator;
	for (int i = terms; i >= 0; i--) {
		cout << "Enter in the value of the number with exponent value of " << i << endl;
		cin >> temp;
		numerator.push_back(temp);
	}
	cout << "Enter in k" << endl;
	cin >> terms;

	vector<Quadratic> zeros;

	vector<Quadratic> x = findZeros(numerator, pairFactors(factorNumber(numerator.at(0)), factorNumber(numerator.at(numerator.size() - 1))), zeros);


	/*vector<int> numerator;
	vector<int> denominator;

	numerator.push_back(-42);
	numerator.push_back(0);
	numerator.push_back(-12);
	numerator.push_back(1);

	denominator.push_back(-3);
	denominator.push_back(1);
	numerator = longDivision(numerator, denominator);

	for(unsigned int i = 0; i < numerator.size(); i++){
		cout<<numerator.at(i)<<endl;
	}*/
}

void displayQuadratic(Quadratic quad){
	cout<<quad.whole;
	if(quad.sqrt != 0)
		cout<<getOperator(quad.mode)<<"\("<<quad.sqrt;
	cout<<endl;
	if(quad.denominator != 1)
		cout<<quad.denominator<<endl;
	cout<<""<<endl;
}

string getOperator(Operator mode){
	switch(mode){
	case Null:
		return "";
	case Add:
		return "+";
	case Subtract:
		return "-";
	}
}
