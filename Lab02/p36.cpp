#include <iostream>
#include <iomanip>

using namespace std;

main (){
	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)	{
		double n; cin >> n;
		int p; cin >> p;
	
		double result = 1;
		for (int j = 0; j < p; ++j) {
			result *= n;
		}
		cout << fixed << setprecision(2) <<result << endl;
	}
}