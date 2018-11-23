#include <iostream>
#include <algorithm>

using namespace std;
	// passing by value and reference

void goodSwap(int& a, int& b){
	swap (a, b);
}

void badSwap(int a, int b){
	swap(a, b);
}

int main(){

	int a; cin >> a;
	int b; cin >> b;

	cout << "Before the swap: " << a << b << endl;
	goodSwap(a, b);
	cout << "after goodSwap: " << a << b << endl;


	badSwap(a, b);
	cout << "after badSwap: " << a << b << endl;
}