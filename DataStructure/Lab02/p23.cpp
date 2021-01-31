#include <iostream>
using namespace std;

	// Derection 

main(){
	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)	{
		int degree; cin >> degree;
		if ((degree >= 0 and degree <=45) or (degree >= 315 and degree <= 360)){
			cout << "N" << endl; 
		}else if (degree > 45 and degree <= 135){
			cout << "E" << endl;
		}else if (degree > 135 and degree <= 225){
			cout << "S" << endl;
		}else if (degree > 225 and degree < 315){
			cout << "W" << endl;
		}
	}
}