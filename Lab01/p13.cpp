#include <iostream>
#include <iomanip>

using namespace std;
	// GPA Calculation

int main(){

	double sum = 0;
	int numberOfGrades = 0;

	cout << "Enter grades (ctrl-z to stop): ";
	int grade; cin >> grade;

	while(cin >> grade){
		sum += grade;
		++numberOfGrades;
	}

	if(numberOfGrades != 0){
		cout << fixed << setprecision(2) << sum / numberOfGrades << endl;
	}else{
		cout << "No data to calculate!" << endl;
	}

	return 0;
}