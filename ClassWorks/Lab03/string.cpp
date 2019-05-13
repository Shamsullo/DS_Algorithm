#include <iostream>
#include <string>

using namespace std;

main(){
	
	cout << "Enter the text: ";
	
	string name; cin >> name;
	
	string border(name.size() + 4, "*");

	cout << border << endl;
	cout << "*" + string(name.size(), " ") + "*" << endl; 
	cout << "*" + name + "*" << endl;
	cout << "*" + string(name.size(), " ") + "*" << endl; 
	cout << border << endl;
	
	return 0;
}

