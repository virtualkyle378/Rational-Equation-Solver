#ifndef ASYMPTOTE_H_
#define ASYMPTOTE_H_

//#include "AsymptoteType.h"
#include "Fraction.h"
using namespace std;

AsymptoteType findHorozontalAsymptote(vector<int> numerator, vector<int> denominator);

Fraction leadingCoefficents(vector<int> numerator, vector<int> denominator);

void trim(vector<int>& vector);

vector<int> scale(vector<int> vector, int scalefactor);

vector<int> longDivision(vector<int> numerator, vector<int> denominator);


#endif /* ASYMPTOTE_H_ */
