#include <iostream>
using namespace std;

	//Squares

main (){
	int number; cin >> number;
	int i = 0;
	while(i * i <= number){
		++i;
	}
	cout << "The largest square has side length " << i -1 << "." << endl;
}