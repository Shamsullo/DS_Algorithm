#include "BigInt.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;
		
BigInt::BigInt(){
	bigIntVector.push_back(0);
	isNegative =  false;
}

BigInt::BigInt(string s){

	if(not isdigit(s.at(0))){
		if(not isdigit(s.at(1))){
			throw runtime_error("Incorrect input format");
		}
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

	for (int i = 0; i < s.size(); ++i){
		if(s[i] >= '0' and s[i] <= '9'){
			bigIntVector.push_back(s[i] - 48);
		}else{
			throw runtime_error("Incorrect input format");
		}	
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

ostream& operator<<(ostream& out, const BigInt& number){

	if (number.isNegative){
		out << '-';
	}
	for(int i = 0; i < number.bigIntVector.size(); ++i){
		out << number.bigIntVector[i];
	}

	return out;
}

istream& operator>>(istream& input, BigInt& number){


	string s; getline(input, s);
	
	number = BigInt(s);
	return input;
}

BigInt operator+(const BigInt& a, const BigInt& b){
	BigInt result;
	if (a.getSign() == b.getSign()){
		result.setNum(BigInt::add(a.getNum(), b.getNum()));
		result.setSign(a.getSign());	
	}else{
		if( absolute(a) > absolute(b)){
			result.setNum( BigInt::sub(a.getNum(), b.getNum() ) );
			result.setSign( a.getSign() );
		}
		else{
			result.setNum( BigInt::sub(b.getNum(), a.getNum()) );
			result.setSign( b.getSign() );
		}
	}
	
	return result;
}

BigInt operator-(const BigInt& a, const BigInt& b){
	BigInt result;
	if(a.getSign() and a.getSign()){
	
		result.setNum(BigInt::add(a.getNum(), b.getNum()));
		result.setSign(a.getSign());	

		return result;
	}
	if(!a.getSign() and !b.getSign()){
		if (absolute(a) > absolute(b)){
			result.setNum(BigInt::sub(a.getNum(), b.getNum()));
		}else if(absolute(b) > absolute(a)){
			result.setNum(BigInt::sub(b.getNum(), a.getNum()));
			result.setSign(true);
		}
		return result;
	}

	if (absolute(a) > absolute(b)){
		result.setNum(BigInt::add(a.getNum(), b.getNum()));
		result.setSign(a.getSign());
	}else if(absolute(b) > absolute(a)){
		result.setNum(BigInt::add(b.getNum(), a.getNum()));
		result.setSign(a.getSign());
	}

	return result;
}

BigInt absolute(BigInt a){
	if(a.getSign()){
		a.setSign(false);
	}
	return a;
}

vector<int> BigInt::add(vector<int> a, vector<int> b){

	int maxLength = max(a.size(), b.size());

	vector<int> x(maxLength);
	int xSize = maxLength - 1;
	for (int i = a.size() - 1; i >= 0; --i){
		x[xSize] = a[i];
		--xSize;
	}

	vector<int> y(maxLength);
	int ySize = maxLength - 1;
	for (int i = b.size() - 1; i >= 0; --i){
		y[ySize] = b[i];
		--ySize;
	}

	int carry = 0;
	vector<int> r(maxLength);
	for(int i = r.size() - 1; i >= 0; --i){
		int add = x[i] + y[i] + carry;
		carry = add / 10;
		add = add % 10;
		r[i] = add;		 
	}
	if(r[0] == 0){
		r.erase(r.begin(), r.begin() + 1);
	}
	
	return r;
}
vector<int> BigInt::sub(vector<int> a, vector<int> b){
	
	int maxLength = max(a.size(), b.size());

	vector<int> x(maxLength);
	int xSize = maxLength - 1;
	for (int i = a.size() - 1; i >= 0; --i){
		x[xSize] = a[i];
		--xSize;
	}

	vector<int> y(maxLength);
	int ySize = maxLength - 1;
	for (int i = b.size() - 1; i >= 0; --i){
		y[ySize] = b[i];
		--ySize;
	}

	int carry = 0;
	vector<int> r(maxLength);
	for(int i = r.size() - 1; i >= 0; --i){
		
		r[i] = (x[i] - carry) - y[i];
		
 		if (r[i] < 0){	
			r[i] += 10;
			carry = 1;	
		} 	 
	}

	if(r[0] == 0){
		r.erase(r.begin(), r.begin() + 1);
	}
	
	return r; 
}

bool operator==(const BigInt& a, const BigInt& b){

	if (a.getSign() == b.getSign()){
		if (a.getNum().size() == b.getNum().size()){
			// return equal(a.getNum().begin(), a.getNum().end(), b.getNum().begin());	
			for (int i = 0; i < a.getNum().size(); ++i){
				if(a.getNum()[i] != b.getNum()[i]){
					return false;
				}
			}
			return true;	
		}
		
	}
	return false;
}

bool operator!=(const BigInt& a, const BigInt& b){
	return !(a == b);
}

bool operator>=(const BigInt& a, const BigInt& b){
	return (a == b or a > b);
}

bool operator<=(const BigInt& a, const BigInt& b){
	return (a == b or a < b);
}

bool operator>(const BigInt& a, const BigInt& b){
	
	if(!a.getSign() and b.getSign()){
		return true;
	}
	
	if (a.getSign() and b.getSign()){
		if(a.getNum().size() < b.getNum().size()){
			return true;
		}
		if (a.getNum().size() == b.getNum().size()){
		
			for(int i = 0; i < a.getNum().size(); ++i){
				
				if(a.getNum()[i] > b.getNum()[i]){
					return false;
				}
			}
			return true;	
		}
		return false;
	}

	if (a.getNum().size() > b.getNum().size() ){
		return true;
	}

	if(a.getNum().size() == b.getNum().size()){
		for(int i = 0; i < a.getNum().size(); ++i){
			if(a.getNum()[i] < b.getNum()[i]){
				return false;
			}
		}
		return true;
	}
	return false; 
}

bool operator<(const BigInt& a, const BigInt& b){
	return not (a > b);
}
