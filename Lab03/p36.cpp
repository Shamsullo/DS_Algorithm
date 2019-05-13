#include <iostream>
#include <string>
#include <cctype>

using namespace std;
	// Woburn Idol

main(){

	string nameOfContestant; cin >> nameOfContestant;
	int aCounter = 0;
	int vowelCounter = 0;	

	for (char ch: nameOfContestant){

		ch = tolower(ch);

		if(ch == 'a'){
			++aCounter;
			// ++vowelCounter;
		}
		if (ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
			++vowelCounter;
		}
	}

	cout << (aCounter >= vowelCounter ? "Advance to next round" : "Does not advance to next round") << endl;
}