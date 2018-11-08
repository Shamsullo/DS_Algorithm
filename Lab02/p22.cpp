#include <iostream>
using namespace std;

	//Primes

main(){
	int number; cin >> number;

	int i = 2;
	cout << 2 << endl;
	int numberOfPrimes = 1;

	while (numberOfPrimes <= number){
		if (i % 2 != 0){
			cout << i << endl;
			++numberOfPrimes;
		}
		++i;
	} 
}