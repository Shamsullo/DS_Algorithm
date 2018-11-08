#include <iostream>
#include <math.h>

using namespace std;

	//World Population

main(){
	double rate; cin >> rate;
	int yYear; cin >> yYear;
	double pop; cin >> pop;
	int xYear; cin >> xYear;
	rate = rate / 100 + 1;

	// double popInX = pop * pow((1 + rate), yYear-xYear);
	// cout << fixed << popInX << endl;

	while(yYear <= xYear){
		pop = (pop * rate);
		++yYear;
	}
	cout << fixed << pop << endl;
}