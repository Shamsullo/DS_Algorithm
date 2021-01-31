#include <iostream>
using namespace std;

//Body Mass Index

main() {

	double w; cin >> w;
	double h; cin >> h;

	double bmi = w / (h * h);

	if(bmi > 25.0){
		cout << "Overweight" << endl;
	}else if (bmi >= 18.5 && bmi <= 25.0){
		cout << "Normal weight" <<e ndl;
	}else if (bmi < 18.5){
		cout << "Underweight" << endl;
	}
}