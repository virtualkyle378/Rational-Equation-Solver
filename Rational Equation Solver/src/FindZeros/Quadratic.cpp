enum Operator{
	Null,
	Add,
	Subtract
};

typedef struct Sqrt {
	int whole;
	int sqrt;
	bool imaginary;
};

typedef struct Quadratic {
	int whole;
	Operator mode;
	Sqrt squrt;
};


