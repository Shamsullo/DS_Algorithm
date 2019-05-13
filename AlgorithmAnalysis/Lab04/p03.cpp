#include <iostream>

using namespace std;

int gcdAux(int a, int b){
	// if(a == 0 and b == 0){
	// 	throw runtime_error("gcd(a, b): a = 0 and b = 0");
	// }
	if(a == 0){
		return b;
	}if(b == 0){
		return a;
	}
	return gcdAux(b, a % b);
}

int gcd(int a, int b){
	
	if (a == 0 and b == 0){
		throw runtime_error("gcd(a, b): a = 0 and b = 0");
	}
	return gcdAux(a, b);
}

int main(){
	
	int a, b;

	while(cin >> a >> b){
		try{
			int r = gcd(a, b);
			cout << "gcd(" << a << ", " << b <<") = " << r << endl;
		}catch(runtime_error& e){
			cout << e.what() << endl;
		}
	}
}