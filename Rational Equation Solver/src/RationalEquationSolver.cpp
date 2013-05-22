#include <iostream>
#include <vector>
#include <Fraction.h>
#include <Operator.h>
#include <Quadratic.h>
using namespace std;

int main(){
	Quadratic x(5,Null,Sqrt(0,27,false),4);
	x.sqrt.simplify();
	x.simplify();
	cout<<x.whole<<" "<<x.mode<<" "<<x.sqrt.whole<<"\("<<x.sqrt.sqrt<< endl;
	cout<<x.denominator;
}
