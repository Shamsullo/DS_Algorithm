#include <iostream>

using namespace std;
	// Division by 0

main(){

	int a, b;

	while(cin >> a >> b){

		if(b == 0){
			cout << "division by 0!" << endl;
			continue;
		}

		cout << "a / b = " << a / b << endl;
		cout << "a % b = " << a % b << endl;
	}

	return 0;
}