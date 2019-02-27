#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

	// Andy's first dictionary

int main(){

	set<string> d;

	string str;

	while (true){
		
		cin >> str;

		// for(int i = 0; i < str.size(); ++i){
		// 	if(isupper(str[i])){
		// 		str[i] = tolower(str[i]);
		// 	}else if(!isalpha(str[i])){
		// 		str.erase(str.begin()+ i);
		// 	}
		// }

		// d.insert(str);

	}

	for(auto s: d){
		cout << s << endl;
	}

	// string a = "sTring";
	// a[1] = 't';
	// string b = "string.";
	// b.erase(b.begin() + 6 );
	// cout << a << endl;
	// cout << b;
	return 0;
}