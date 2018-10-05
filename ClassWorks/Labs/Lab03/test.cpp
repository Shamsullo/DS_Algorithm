#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

main(){
	string msg;
	getline(cin, msg);
	
	string buf;
	for (char ch:msg){
		if (isalpha(ch))
			buf	+=tolower(ch);
	}
	
	string tmp = buf;
	reverse(tmp.begin(), tmp.end());
	
	cout << (tmp == buf ? "yes":"no") << endl;
	
}