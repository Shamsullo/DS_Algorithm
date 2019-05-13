#include <bits/stdc++.h>
using namespace std;

	// AUTORI	

main(){

	string s; cin >> s;

	cout << s.at(0);

	for (int i = 1; i < s.size(); ++i){
		if(s.at(i) == '-'){
			cout << s.at(i + 1);
		}
	}
}