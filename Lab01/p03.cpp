#include <iostream>
#include <iomanip>

using namespace std;
	// Seconds to hours and minutes

int main(){

	cout << "seconds: ";

	int seconds; cin >> seconds;

	int hours = seconds / 3600;
	seconds %= 3600;
	
	int minutes = seconds / 60;
	seconds %= 60;

	cout << setfill('0')
		 << setw(2) << hours << ":"
		 << setw(2) << minutes << ":"
		 << setw(2) << seconds << endl;
	
	return 0; 
}