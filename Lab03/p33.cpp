#include <iostream>
#include <string>
#include <cctype>
	
using namespace std;
	// Lower Case

main(){

	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		string str; cin >> str;
		// for (char ch: str){
		for (int j = 0; j < str.size(); j++){
			char ch = str.at(j);
			if(isalpha(ch) and isupper(ch)){
				str.at(j) =  tolower(ch);
			} 
		}
		cout << str << endl;
	}

	

}