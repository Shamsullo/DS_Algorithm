#include <iostream>
#include <cctype>

using namespace std;
	// Counting Characters

main(){

	int letters = 0;
	int lowerCases = 0;
	int upperCases = 0;
	int digits = 0;
	int wc = 0;
	int controlCh = 0;


	char ch; 
	while(cin.get(ch)){

		letters += isalpha(ch) ? 1 : 0;
		lowerCases += islower(ch) ? 1 : 0;
		upperCases += isupper(ch) ? 1 : 0;
		digits += isdigit(ch) ? 1 : 0;
		wc += isspace(ch) ? 1 : 0;
		controlCh += iscntrl(ch) ? 1 : 0;

	}

	cout << "Letters: " << letters << endl
		 << "UpperCase Letter: " << upperCases << endl
		 << "LowerCase Letters: " << lowerCases << endl
		 << "Digits: " << digits << endl
		 << "WhiteSpaces: " << wc << endl
		 <<  "Control Characters: " << controlCh << endl; 

	return 0;
}