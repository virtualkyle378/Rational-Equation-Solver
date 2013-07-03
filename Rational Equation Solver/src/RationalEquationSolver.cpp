#include <iostream>
#include <vector>
#include <Fraction.h>
#include <Operator.h>
#include <Quadratic.h>
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
