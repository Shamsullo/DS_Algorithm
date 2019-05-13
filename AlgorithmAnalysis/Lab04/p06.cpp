#include <iostream>

using namespace std;

int64_t fib(int n){
	if(n == 0 or n == 1){
		return 1;
	}else{
		return fib(n - 2) + fib(n - 1);
	}
	// return n == 0 or n == 1 ? 1 : fib(n - 2) + fib(n-1);
}

int64_t fibIter(int n){
	
	int64_t a = 1;
	int64_t b = 1;
	
	if(n == 1 or  n == 0){
		return a;
	}
	
	for (int i = 2; i <= n; ++i){
		int64_t temp =  a + b;
		a = b;
		b = temp;
	}
	return b; 
}

int main(){
	int n; cin >> n;
	cout << "fib(" << n << ") = " << fibIter(n) << endl;
}