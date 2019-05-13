#include <iostream>
#include <limits>

using namespace std;

int main(){

	cout << "Numbers of bits in int: " << sizeof(int) << endl;
	cout << "Minimum value of int: " << numeric_limits<int>::min() << endl;
	cout << "Maximum value of int: " << numeric_limits<int>::max() << endl;

	cout << "1st number: ";
	int a; cin >> a;

	cout << "2nd number: ";
	int b; cin >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	cout << "after++ " << a << " will be ";
	a++;
	cout << a << endl;

	cout << "after-- " << b << " will be ";
	b--;
	cout << b << endl;

	return 0;
}