#include <iostream>

using namespace std;

	// Cell Sell

main() {
	int daytime; cin >> daytime;
	int evening; cin >> evening;
	int weekend; cin >> weekend;

	double planACost = (evening * 0.15) + (weekend * 0.20);
	double planBCost = (evening * 0.35) + (weekend * 0.25);

	if (daytime > 100){
		double dayTimeA = daytime - 100;
		planACost += dayTimeA * 0.25;
	}
	if (daytime > 250){
		double dayTimeB = daytime - 250;
		planBCost += dayTimeB * 0.45;
	}

	cout << "Plan A costs " << planACost << endl;
	cout << "Plan B costs " << planBCost << endl;
	if (planACost < planBCost){
		cout << "Plan A is the cheapest." << endl;
	}
	if(planBCost < planACost){
		cout << "Plan B is the cheapest." << endl;
	}else{
		cout << "Plan A and B are the same price." << endl;
	}
 
}