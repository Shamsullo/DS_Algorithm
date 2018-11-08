#include <iostream>
#include <cmath>

using namespace std;

	//Powers of 2;

main(){
	int n; cin >> n;

	int i = 0;
	while (pow(2, i) < n)
	{
		if (n != 0)
			++i;
	}

	cout << i << endl;

}