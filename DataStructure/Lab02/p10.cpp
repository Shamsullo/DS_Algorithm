#include <iostream>
using namespace std;

main(){
	int speedLimit; cin >> speedLimit;
	int speedOfTheCar; cin >> speedOfTheCar;

	if (speedOfTheCar > speedLimit){
		int fine = speedOfTheCar - speedLimit;
		if(fine <= 20){
			cout << "You are speeding and your fine is $100." << endl;

		}else if(fine >= 21 and fine <=30){
			cout << "You are speeding and your fine is $270." << endl; 
		}else if (fine >= 31){
			cout << "You are speeding and your fine is $500." << endl;
		}	
	}else{
		cout << "Congratulations, you are within the speed limit!" << endl;
	}
}