#include <iostream>
using namespace std;

//Special Day

main(){

	int month;  cin >> month;
	int day; cin >> day;

	if (month < 2){ 
		cout << "Before" << endl;
	}else if ( month == 2 and day == 18){
		cout << "Special" << endl;
	}else if ( month >= 2){
		if (month == 2){
			if (day > 18){
				cout << "After" << endl;	
			}else{
				cout << "Before" << endl;
			}	
		}else{
			cout << "After" << endl;
		}		
	}
}