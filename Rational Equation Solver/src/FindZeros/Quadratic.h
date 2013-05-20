#ifndef QUADRATIC_H_
#define QUADRATIC_H_
#include "Quadratic.cpp"

class Sqrt;

//using namespace Sqrt;
Sqrt::Sqrt();
Sqrt::Sqrt(int sqrt);
Sqrt::Sqrt(int whole, int sqrt, bool imaginary);
void Sqrt::simplify();

class Quadratic;

//using namespace Quadratic;
Quadratic::Quadratic(int whole, Operator mode, Sqrt sqrt, int denominator);
Quadratic::Quadratic(Fraction fraction);
Quadratic::Quadratic(const Quadratic& other);
Quadratic::~Quadratic();
void Quadratic::simplify();

#endif /* QUADRATIC_H_ */
