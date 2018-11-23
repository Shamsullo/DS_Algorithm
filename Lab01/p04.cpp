#include <iostream>
#include <limits>
// #include <iomanip>

using namespace std;
	// Mathematical operations with double;

int main(){

	cout << "double size:" << sizeof(double) << " bytes" << endl;
	cout << "Max value of double: " << numeric_limits<double>::max() << endl;
	cout << "Min value of double: " << numeric_limits<double>::min() << endl;

	cout << "1st number: ";
	double a; cin >> a;

	cout << "2nd number: ";
	double b; cin >> b;

	double sum = a + b, sub = a - b, mul = a * b, div = a /b;

	cout << a << " + " << b << " = " << sum << endl;
	cout << a << " - " << b << " = " << sub << endl;
	cout << a << " * " << b << " = " << mul << endl;
	cout << a << " / " << b << " = " << div << endl;

	cout << "after++ " << a << " will be ";
	a++;
	cout << a << endl;

	cout << "after-- " << b << " will be ";
	b--;
	cout << b << endl;

	return 0;
}