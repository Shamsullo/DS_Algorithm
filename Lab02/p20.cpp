#include <iostream>

using namespace std;

	//Grades

main (){
	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)	{
		int percnetage; cin >> percnetage;

		if (percnetage >= 80 and percnetage <= 100){
			cout << "A"; 
		}else if (percnetage >= 70 and percnetage < 80){
			cout << "B";
		}else if (percnetage >= 60 and percnetage < 70){
			cout << "C";
		}else if (percnetage >= 50 and percnetage < 60){
			cout << "D";
		}else if ( percnetage >= 0 and percnetage < 50){
			cout << "F";
		}else{
			cout << "X";
		}
		cout << endl;
	}
}