#include <iostream>
using namespace std;

// Task DATUM

main() {
	
	int day; cin >> day;
	
	vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 31}
	
	int i = 0
	
	while(day >=  daysInMonth[i]){
		day -= daysInMonth[i]; 
		++i;
	}
	
	cout << i << "/" << day << endl;
}