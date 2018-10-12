#include <iostream>

using namespace std;

	//Min

main(){
	int testCase; cin >> testCase;
	double min = 0;
	for (int i = 0; i < testCase; ++i){
		double input; cin >> input;
		if (i == 0)
			min = input;
		if (input < min)
			min = input;
	}
	cout << min << endl;
}