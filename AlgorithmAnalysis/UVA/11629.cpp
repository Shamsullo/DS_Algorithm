#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
	//Ballot Evaluation

int main(){

	unordered_map<string, int> ballot;

	int p; cin >> p;
	int g; cin >> g;
	for (int i = 0; i < p; ++i){
		string party; cin >> party;
		float v; cin >> v;
		v *= 10;
		int p = (int) v;
		ballot[party] =  p;
	}
	
	for (int i = 1; i <= g; ++i){
		int c = 0;
		string s; cin >> s;
		string cmp = ">=<";
		// while(cmp.find(s) != string::npos){
		while(true){

			if(s == ">" or s == "<" or s == "<=" or s == ">=" or s == "=") break;	
			
			if(s != "+" ){
				c += ballot[s];
				// cout << "i was here" << endl;
			}
			cin >> s;
		}
		int t; cin >> t;
		t *= 10; 

		cout << "Guess #" << i;
		
		if (s == ">"){
			cout << (c > t ? " was correct." : " was incorrect.") << endl;
		}else if(s == "<"){
			cout << (c < t ? " was correct." : " was incorrect.") << endl;
		}else if(s == ">="){
			cout << (c >= t ? " was correct." : " was incorrect.") << endl;
		}else if(s == "<="){
			cout << (c <= t ? " was correct." : " was incorrect.") << endl;
		}else if(s == "="){
			cout << (c == t ? " was correct." : " was incorrect.") << endl;		
		}
	}
}


