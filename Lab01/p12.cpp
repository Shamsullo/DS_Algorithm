#include <iostream>

using namespace std;
	// Grade coverter;

int main(){

	cout << "Enter you the point you get: ";
	int point; cin >> point;

	char grade;

	if ( point > 100){
		grade = 0;
	}else if(point >= 80){
		grade = 'A';
	}else if(point >= 70){
		grade == 'B';
	}else if (point >= 55){
		grade = 'C';
	}else if (point >= 40){
		grade = 'D';
	}else {
		grade = 'F';
	}

	if(grade != 0){
		cout << "Your grade: " << grade << endl;
	}else{
		cout << "Incorrect data";
	}

	return 0;
}