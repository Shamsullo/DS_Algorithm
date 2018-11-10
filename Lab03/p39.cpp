#include <iostream>
#include <string>
#include <cctype>

using namespace std;
	// AmeriCanadian

bool isConsonant(char ch){
	if (isalpha(ch)){

		ch = tolower(ch);
		string vowels= "aeiouy";
		if (vowels.find(ch) >= 0 and vowels.find(ch) < 6){
			return false;
		}
		return true;
	}
	return false;
}

int main(){

	string americanWord; 
	while(americanWord.compare("quit!") != 0){

		if (americanWord.size() > 4){
			if(americanWord.substr(americanWord.size() - 2).compare("or") == 0) {
				if(isConsonant(americanWord.at(americanWord.size() - 3))){
					americanWord.insert(americanWord.size() - 1, "u");
				}	
			}
		}
		cout << americanWord << endl;
		cin >> americanWord;
	}
	


}