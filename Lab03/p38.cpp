#include <iostream>
#include <string>

using namespace std;
	// 	Okatalni

int main(){

	string input; cin >> input;
	string answer = "";

	while (input.size() % 3 != 0){
		input.insert(0, "0");
	}

	for (int i = 0; i < input.size(); i += 3){
		string substring = input.substr(i, 3);

		if(substring.compare("000") == 0){
			answer += "0";
		}else if(substring.compare("001") == 0){
			answer += "1";
		}else if(substring.compare("010") == 0){
			answer += "2";
		}else if(substring.compare("011") == 0){
			answer += "3";
		}else if(substring.compare("100") == 0){
			answer += "4";
		}else if(substring.compare("101") == 0){
			answer += "5";
		}else if(substring.compare("110") == 0){
			answer += "6";
		}else if(substring.compare("111") == 0){
			answer += "7";
		}

	}
	cout << answer << endl;
	
	return 0;
}