#include <vector>
#include <Fraction.h>
using namespace std;

vector<int> factorNumber(int num){
	vector<int> factors;
	for(int x = 1; x < num + 1; x++){
		for(int y = 1; y < num + 1; y++){
			if(x*y == num){
				factors.push_back(y);
			}
		}
	}
	return factors;
}


