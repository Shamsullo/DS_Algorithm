#include <iostream>

using namespace std;

	//Tournament selection

main(){
	int lCounter = 0;
	int wCounter = 0;
	for (int i = 0; i < 6; ++i) {
		char input; cin >> input;

		if (input == 'L')
			++lCounter;
		if (input == 'W')
			++wCounter;
	}

	if (wCounter == 5 or wCounter == 6){
		cout << "1" << endl;
	}else if (wCounter == 3 or wCounter == 4){
		cout << "2" << endl;
	}else if (wCounter == 1 or wCounter == 2){
		cout << "3" << endl;
	}else{
		cout << "-1" << endl;
	}
}