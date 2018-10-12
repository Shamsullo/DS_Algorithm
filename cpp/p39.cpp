#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

	//World Population

main(){
	double rate; cin >> rate;
	int yYear; cin >> yYear;
	double pop; cin >> pop;
	int xYear; cin >> xYear;
	rate = 1 + rate / 100;

	while(yYear < xYear){
		pop *= rate;
		++yYear;
	}
	cout << fixed << setprecision(0) << round(pop) << endl;
}