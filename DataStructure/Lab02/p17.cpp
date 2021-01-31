#include <iostream>

using namespace std;

	//Leap Year

main(){
	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)	{
		int year; cin >> year;
		if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
}