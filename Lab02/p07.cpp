	#include <iostream>
	using namespace std;

	// Triangle Times

	main(){

		int a1; cin >> a1;
		int a2; cin >> a2;
		int a3; cin >> a3;

		int sum = a1 + a2 + a3;

		if (sum == 180){
			if (a1 == a2 and a2 == a3){
				cout << "Equilateral" << endl;
			}else if (a1 == a2 or a1 == a3 or a2 == a3){
				cout << "Isosceles" << endl;
			}else if (a1 != a2 and a1 != a3 and a2 != a3){
				cout << "Scalene" << endl;
			}
		}else{
			cout << "Error" << endl;
		}
	}