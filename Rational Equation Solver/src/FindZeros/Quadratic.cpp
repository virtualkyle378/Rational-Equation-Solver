/*enum Operator{
	Null,
	Add,
	Subtract,
};*/

struct Sqrt {
	int whole;
	int sqrt;
	bool imaginary;
};

struct Quadratic {
	int whole;
	Operator mode;
	Sqrt squrt;
};


