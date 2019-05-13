#include <iostream>

using namespace std;
int main()
{	
	cout << "1st number: ";
	int a;
	cin >> a;
	cout << "2nd number: ";
	int b;
	cin >> b;
	
	int sum = a + b;
	int sub = a - b;
	int mul =  a * b;
	int div = a / b;
	int p = a % b;
	
	cout  << a <<" + " << b << " = " << sum;
	cout << endl;
	cout  << a <<" - " << b << " = " << sub << endl;
	cout  << a <<" * " << b << " = " << mul << endl;
	cout  << a <<" / " << b << " = " << div << endl;
	cout  << a <<" / " << b << " = " << div << endl;
	
	return 0;

}