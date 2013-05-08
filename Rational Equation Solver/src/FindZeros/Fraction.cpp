class Fraction {
public:
	int numerator;
	int denominator;
	Fraction(Fraction& other): numerator(other.numerator), denominator(other.denominator){
	};
	Fraction(int numerator, int denominator){
		this->numerator = numerator;
		this->denominator = denominator;
	}
};

Fraction simpFrac(Fraction frac){
	if(frac.denominator < 0){
		frac.numerator *= -1;
		frac.denominator *= -1;
	}
	bool signinv = frac.numerator < 0;
	if(signinv)
		frac.numerator = frac.numerator * -1;
	for(int i = frac.numerator; i > 1; i--){
		if(i % frac.numerator == 0 && i % frac.denominator == 0){
			frac.numerator /= i;
			frac.denominator /= i;
			break;
		}
	}
	if(signinv)
		frac.numerator = frac.numerator * -1;
	return frac;
}
