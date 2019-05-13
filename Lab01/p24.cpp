#include <iostream>
#include <string>

using namespace std;
	// What is in the quote

int main() {

	int c = 0;

	string line; 
	bool inQuote = false;
	int start = -1;

	while(getline(cin, line)){
		++c;
		for(int i = 0; i < line.size(); ++i){
			if(line[i] == '\"' and not inQuote){
				start = i;
				inQuote = true;
			}else if(line[i] == '\"' and inQuote){
				inQuote = false;
				cout << line.substr(start, i - start + 1) << endl;
			}
		}
	}
	return 0;
}