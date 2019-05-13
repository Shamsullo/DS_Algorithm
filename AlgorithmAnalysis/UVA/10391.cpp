#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	
	set<string> c;
	string input;
	
	while(cin >> input){
		c.insert(input);
	}

	for (auto& s: c){
		for (int i = 1; i < s.size(); ++i)
		{
			string p1 = s.substr(0, i);
			string p2 = s.substr(i, s.size()-1);
			if (c.find(p1) != c.end() and c.find(p2) != c.end()){
				cout << s << endl;
				break;
			}
		}
	}
	
	return 0;
}
