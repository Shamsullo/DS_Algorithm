#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

	// Andy's second dictionary

int main(){

	set<string> d;
	string line; 
	string result = ""; 

	while (getline(cin, line)){

		if(result[result.size() - 1] != '-'){
			result = "";
		}else{
			result.erase(result.end() - 1);
		} 

		for (int i = 0; i < line.size(); ++i){		
			char ch = line[i];
			
			if (isalpha(ch) or ch == '-'){
				ch = tolower(ch);
				result += ch;
				if (i == line.size() -1 and ch != '-'){
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
