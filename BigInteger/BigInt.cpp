#include "BigInt.h"


#include <cstdlib>
#include <stdexcept>
#include <cctype>

using namespace std;
		
BigInt::BigInt(){
	bigIntVector.push_back(0);
	isNegative =  false;
}

BigInt::BigInt(string s){

	if(!isdigit(s.at(0))){
		if(s.at(0) == '-'){
			isNegative = true;
			s.erase(0, 1);
		}else{
			throw runtime_error("Incorrect input format");
		}

	}

	while(s.at(0) == '0' and s.size() != 1){
	
		s.erase(0, 1);
	
	}

	for (int i = 0; i < s.size(); ++i)
	{
		bigIntVector.push_back(s[i] - 48);
	}
}

BigInt::BigInt(int n){
	string s = to_string(n);
	if(s.at(0) == '-'){
		isNegative = true;
		s.erase(0, 1);
	}
	for (int i = 0; i < s.size(); ++i){
		bigIntVector.push_back(s.at(i) - 48);
	}
}

ostream& operator<<(ostream& out, const BigInt number){

	if (number.isNegative){
		out << '-';
	}
	for(int i = 0; i < number.bigIntVector.size(); ++i){
		out << number.bigIntVector[i];
	}

	return out;
}




