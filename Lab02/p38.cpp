#include <iostream>

using namespace std;

	// Deal or no Deal game

main(){
	int briefcases[10] = {100, 500, 1000, 5000, 10000, 
		25000, 50000, 100000, 500000, 1000000};
	int sum = 0;

	for (int i = 0; i < 10; ++i){
		sum += briefcases[i];
	}

	int testCase; cin >> testCase;
	int inputSum = 0;
	for (int i = 0; i < testCase; ++i){
		int input; cin >> input;
		inputSum += briefcases[input - 1];
	}
	int offer; cin >> offer;

	sum -= inputSum;
	sum /= 10 - testCase; 

	if (offer > sum){
		cout << "deal" << endl;
	}else{
		cout << "no deal" << endl;
	}
}