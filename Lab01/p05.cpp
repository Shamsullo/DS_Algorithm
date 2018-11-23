#include <iostream>
#include <iomanip>

using namespace std;
	// inches to cm
int main(){

	const double cmPerInch = 2.54;

	cout << "length in inches: ";
	double lengthInInches; cin >> lengthInInches;

	double lengthInCm = lengthInInches * cmPerInch;

	cout << fixed << setprecision(2) << lengthInInches << " in. = " << lengthInCm << endl;

}