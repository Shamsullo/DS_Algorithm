#include <iostream>

using namespace std;

	// RSA Number
main(){
	int a; cin >> a;
	int b; cin >> b;
	int numberOfRsa = 0;

	for (int i = a; i <= b; ++i)
	{
		int numberOfDevisors = 0;
		for (int j = 1; j <= i; ++j)
		{
			if (i % j == 0)
				++numberOfDevisors;
		}

		if (numberOfDevisors == 4)
			++numberOfRsa;
	}

	cout << "The number of RSA numbers between " 
		 << a << " and " << b << " is " << numberOfRsa << endl;
}