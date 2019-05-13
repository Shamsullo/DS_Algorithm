#include <iostream>
#include <ctime>
#include <algorithm>
#include <stdexcept>

using namespace std;
	// GCD;

int gcd(int a, int b){

	if(a == 0 and b == 0){
		throw invalid_argument ("gcd(0, 0) is not defined! ");
	}
	if(a == 0){
		return b;
	}
	if(b == 0){
		return a;
	}

	a = abs(a);
	b = abs(b);

	int d = min(a, b);
	while (a % d != 0 or b % d != 0){
		--d;
	}
	return d;

}


int main(){

	int a;
	int b;
	while(cin >> a >> b){
		try{
			clock_t beg = clock();
			int d = gcd(a, b);
			clock_t end = clock();

			cout << "gcd(" << a << ", " << b << ") = " << d << endl;
			cout << double (end - beg) / CLOCKS_PER_SEC << endl;
		}catch (invalid_argument(e)){
			cout << e.what();
		}
	}
	return 0;
}