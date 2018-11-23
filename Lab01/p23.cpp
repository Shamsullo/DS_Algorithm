#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
	// Palindrome

int main() {

	string msg; 
	getline(cin, msg);

	string buf;
	for (char ch: msg){

		if (isalpha(ch)){
			buf += tolower(ch);
		}
	}

	string temp = buf;
	reverse (buf.begin(), buf.end());

	cout << (buf == temp ? "Palindrome" : "Not Palindrome") << endl;

	return 0;
}