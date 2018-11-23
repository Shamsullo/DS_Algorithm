#include <iostream>

using namespace std;

	//Roll the Dice

main(){
	int a; cin >> a;
	int b; cin >> b;
	int counter = 0; 

	for (int i = 1; i <= a ; ++i){
		for (int j = b; j > 0; --j){
			if(j + i == 10){
				++counter;
				break;
			}
		}			

	}
	cout << counter << endl;
}