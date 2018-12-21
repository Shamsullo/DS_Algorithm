#ifndef BIGINT_H
#define BIGINT_H

#include <string>
#include <vector>
#include <sstream>

class BigInt{

	friend std::ostream& operator<<(std::ostream& out, const BigInt& number);
	friend std::istream& operator>>(std::istream& input, BigInt& number);
	friend BigInt absolute(BigInt a);

	
	public:
		BigInt();
		explicit BigInt(std::string str);
		BigInt(int number);

		std::vector<int> getNum() const{
			return bigIntVector;
		}
		bool getSign() const{
			return isNegative;
		}
		void setNum(std::vector<int> v){
			bigIntVector = v;
		}
		void setSign(bool b){
			isNegative = b;
		}

	static std::vector<int> add(std::vector<int> v1, std::vector<int> v2);
	static std::vector<int> sub(std::vector<int> v1, std::vector<int> v2);

	

	private:
		std::vector<int> bigIntVector;
		bool isNegative = false;
		

};


std::ostream& operator<<(std::ostream& out, const BigInt& number);
std::istream& operator>>(std::istream& input, BigInt& number);

BigInt absolute(BigInt a);

BigInt operator+(const BigInt& a, const BigInt& b);
BigInt operator-(const BigInt& a, const BigInt& b);

bool operator==(const BigInt& a, const BigInt& b);
bool operator!=(const BigInt& a, const BigInt& b);
bool operator>(const BigInt& a, const BigInt& b);
bool operator<(const BigInt& a, const BigInt& b);
bool operator>=(const BigInt& a, const BigInt& b);
bool operator<=(const BigInt& a, const BigInt& b);

inline
BigInt operator++(BigInt a){
	return a + BigInt("1");
}

inline
BigInt operator++(BigInt a, int t){
	BigInt temp = a;
	++a;
	return temp;
}

inline
BigInt operator--(BigInt a){
	return a - BigInt("1");
}

inline
BigInt operator--(BigInt a, int t){
	BigInt temp = a;
	--a;
	return temp;
}

#endif