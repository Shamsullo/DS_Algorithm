#include <iostream>
#include <vector>
#include "BigInt.h"

using namespace std;

// bool vc(vector<int> a, vector<int> b){
// 	//if (a.getSign() == b.getSign()){
// 		if (a.size() == b.size()){
// 			return equal(a.begin(), a.end(), b.begin());	
// 			// for (int i = 0; i < a.getNum().size(); ++i){
// 			// 	a.getNum()[i] != b.getNum()[i];
// 			// 	return false;
// 			// }	
// 		}

// 	//}
// 	return false;
// }
int main(){

	// int r = 34;
	BigInt a ("2340");

	BigInt b("10");
	

	cout << b++ << b + a-- << endl;
	cout << a-- << endl;
	cout << endl;

	// int c = 1;
	// int d = 2;
	// cout << c++ + d << endl;

	// cout << --a << endl;


}
