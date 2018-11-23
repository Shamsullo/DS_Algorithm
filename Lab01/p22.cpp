#include <iostream>
#include <string>

using namespace std;
	// String

int main() {

	cout << "Enter the of programming languge: ";
	string name; cin >> name;

	string border(name.size() + 4, '*');

	cout << border << endl;
	cout << "* " << string(name.size(), ' ') << " *" << endl;
	cout << "* " << name << " *" << endl;
	cout << "* " << string(name.size(), ' ') << " *" << endl;
	cout << border << endl;
}
