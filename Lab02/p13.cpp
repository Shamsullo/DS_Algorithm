#include <iostream>

using namespace std;

	//Change

main() {
	int cents; cin >> cents;
	int centsInut = cents;

	int quaters = 0; //25 cents
	int dimes = 0;	//10 cents
	int nickels = 0; // 5 cents

	while (cents >= 25){
		cents -= 25;
		++quaters;
	}
	while(cents >= 10){
		cents -= 10;
		++dimes;
	}
	while (cents >= 5){
		cents -= 5;
		++nickels;
	}

	cout << centsInut << " cents requires ";

	if (quaters != 0)
		cout << quaters  << " quater" << (quaters == 1 ? ", " : "s, ");
	if (dimes != 0 )
		cout << dimes << " dime" << (dimes == 1 ? ", " : "s, ");
	if (nickels != 0)
		cout << nickels << " nickel" << (nickels == 1 ? ", " : "s, ");
	if (cents != 0)
		cout << cents << " cent" << (cents == 1 ? ". " : "s. ");
	cout << endl;
}