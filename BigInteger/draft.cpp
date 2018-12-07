#include <iostream>

#include "BigInt.h"

using namespace std;

int main(){
	BigInt a = 354;
	cout << "int constructor: " << a << endl;
	BigInt b("-234");
	cout << "String constructor: " << b << endl;
}