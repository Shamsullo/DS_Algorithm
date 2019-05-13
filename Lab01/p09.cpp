#include <iostream>

using namespace std;
	// Absololute Value

int main(){

	cout << "Some number: ";
	int n; cin >> n;

	int abs = n;
	if(n < 0){
		abs = -n;
	}

	cout << "|" << n << "| = " << abs << endl; 

	return 0;
}