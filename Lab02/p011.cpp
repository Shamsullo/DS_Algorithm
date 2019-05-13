#include <iostream>
// #include <iomanip>
// #include <cmath>

using namespace std;

	// Equation 

main(){
	double a; cin >> a;
	double b; cin >> b;

	if (a == 0 and b == 0){
		cout << "indeterminate" << endl;
	}else if (a == 0){
		cout << "undefined" << endl;
	}else{
		b = -b;
		cout << /*fixed << setprecision(3) <<*/ (b / a) << endl;
	}

}