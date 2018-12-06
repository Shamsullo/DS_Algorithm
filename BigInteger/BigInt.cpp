#include "BigInt.h"
#include <vector>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

using namespace std;
		
vector<int> bigIntVector;
bool isNegative = false;

BigInt::BigInt(){
	bigIntVector.push_back(0);
}

BigInt::BigInt(stirng s){

	for (int i = s.size() - 1; i > 0; ++i)
	{
		/* code */
	}
}



