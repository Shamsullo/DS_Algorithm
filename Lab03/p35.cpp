#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using namespace std;
	// Find the Chatacter

main(){
	string line1; 
	getline(cin, line1)
;	char ch = line1.at(0);

	int chCounter = 0;
	string sentence = "";

	while(true){
		string line;
		getline(cin, line);
		sentence += line;
		if(line.at(line.length() - 1) == '.'){break;}
	}
	
	for (char c: sentence){

		if(tolower(c) == ch){
			++chCounter;
		}
	}

	cout << sentence << endl;
	cout << chCounter << endl;
}