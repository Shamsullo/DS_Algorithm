#include <iostream>
#include <ctime>

using namespace std;
	// Prime number;

bool isPrime(int n){
	if (n ==  1){
		return false;
	}
	if(n == 2){
		return true;
	}
	if (n % 2 == 0){
		return false;
	}
	for (int i = 3; i * i <= n; ++i){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){

	int a; cin >> a;
	int b; cin >> b;
	clock_t beg = clock();
	int primeCounter = 0;
	for (int i = a; i <= b; ++i){
		if(isPrime(i)){
			++primeCounter;
			cout << i << " ";
		}
	}
	clock_t end = clock();

	cout << endl;
	cout << "Prime number: " << primeCounter << endl;
	cout << "time: " << (double) (end - beg) / CLOCKS_PER_SEC << endl;
	return 0;
}