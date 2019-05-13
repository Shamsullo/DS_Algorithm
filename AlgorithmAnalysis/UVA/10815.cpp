#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;
	// Andy's first dictionary

int main(){

	set<string> d;
	
	string line; 
	

	while (getline(cin, line)){

		string result = ""; 

		for (int i = 0; i < line.size(); ++i){	
			
			char ch = line[i];

			if (isalpha(ch)){
				ch = tolower(ch);
				result += ch;
				if (i == line.size() -1){
					d.insert(result);
				}	
			}else{
				d.insert(result);
				result = "";
			}
		}

	}			
	
	for(auto s: d){	
		if(!s.empty()){
			cout << s << endl;
		}
	}

	return 0;
}
