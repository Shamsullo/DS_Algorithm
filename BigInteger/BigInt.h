#ifndef BIGINT_H
#define BIGINT_H

#include <string>
#include <vector>
#include <sstream>

class BigInt{

	public:
		BigInt();
		BigInt(std::string str);
		BigInt(int number);

	
	std::vector<int> bigIntVector;
	bool isNegative = false;
};

std::ostream& operator<<(std::ostream& out, const BigInt number);

#endif