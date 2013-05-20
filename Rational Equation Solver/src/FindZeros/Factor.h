#ifndef FACTOR_H_
#define FACTOR_H_
#include <vector>
#include "Factor.cpp"
using namespace std;


vector<int> factorNumber(int num);

vector<int> findPrimeFactors(int num);

vector<Fraction> pairFactors(vector<int> factor1, vector<int> factor2);

#endif /* FACTOR_H_ */
