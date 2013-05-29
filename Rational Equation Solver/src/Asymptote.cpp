#include <vector>
#include "FindZeros.cpp"
using namespace std;

int findLimit(vector<int> numerator, vector<int> denominator){
	if(denominator.size() != numerator.size()){
		return 0;
	}
	return numerator.at(numerator.size() - 1) / denominator.at(denominator.size() - 1);
}

bool isOblique(vector<int> numerator, vector<int> denominator){
	if((numerator.size() > denominator.size()) && (numerator.size() == 3))
		return true;
	else
		return false;
}

vector<int> findOblique(vector<int> numerator, vector<int> denominator){
	//TODO
}


