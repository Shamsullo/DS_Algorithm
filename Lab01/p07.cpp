#include <iostream>

using namespace std;
	//Booolean Operator

int main(){

	cout << "Size of bool in bytes: " << sizeof(bool) << endl;
	cout << "true: " << true << endl;
	cout << "false: " << false << endl;

	cout << "NOT Operator: " << endl;
	cout << "not " << false << " = " << (not false) << endl;
	cout << "not " << true << " = " << (not true) << endl;

	cout << -5 << " and " << 3 << " = " << (-5 and 3) << endl; 

	cout << boolalpha;

	int x = 5;
	cout << x << " + " << true << " = " << x + true << endl;
	cout << false << endl;

	cout << "first num: ";
	int a; cin >> a;

	cout << "second num: ";
	int b; cin >> b;

	cout << b << "is divisor of " << a << ": " << (b != 0 and a % b == 0) << endl; 

}