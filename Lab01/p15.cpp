#include <iostream>

using namespace std;

main(){

	cout << "Enter a number: ";
	int n; cin >> n;

	int digits = 0;
	int m = n;

	do{
		m /= 10;
		++digits;
	}while(m != 0);

	cout << n << " has " << digits << " digit" << (digits == 1 ? ".":"s.") << endl;
}