#include <iostream>
#include <vector>
#include <Fraction.h>
#include <Operator.h>
#include <Quadratic.h>
using namespace std;

int findLimit(vector<int> numerator, vector<int> denominator);

int main(){
//	Quadratic x(5,Null,Sqrt(0,27,false),4);
//	x.sqrt.simplify();
//	x.simplify();
//	cout<<x.whole<<" "<<x.mode<<" "<<x.sqrt.whole<<"\("<<x.sqrt.sqrt<< endl;
//	cout<<x.denominator;
	vector<int> num, den;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	den.push_back(1);
	den.push_back(2);
	den.push_back(3);
	cout<<findLimit(num, den);
}
