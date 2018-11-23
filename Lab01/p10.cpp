#include <iostream>

using namespace std;
	// How old are you?
int main(){

	cout << "Your age: ";
	int age; cin >> age;

	// if (age < 24){
	// 	cout << ":-)" << endl;
	// }else{
	// 	cout << ":-(" << endl;
	// }

	cout << (age < 24 ? ":-)" : ":-(") << endl;

	return 0;
}