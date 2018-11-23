#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
	//Pifagor theorem 

int main(){

	cout << "1st cathetus: ";
	double c1; cin >> c1;

	cout << "2nd cathetus: ";
	double c2; cin >> c2;

	double hypotenuse =  sqrt(c1 * c1 + c2 * c2);

	cout << fixed << setprecision(2) << "hypotenuse = " << hypotenuse << endl;

	return 0;
}