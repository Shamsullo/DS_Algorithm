#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

int main(){

	unordered_map<string, string> dict;
	string line;
	
	while(getline(cin, line)){
		
		istringstream sinp(line);
		string eng; sinp >> eng;
		string frn; sinp >> frn;

		if(eng.empty())
			break;
		dict[frn] = eng;

	} 
	
	string frn;
	while(cin >> frn){
		if(!dict[frn].empty())
			cout << dict[frn] << endl;
		else
			cout << "eh\n";
	}

}

	// for (auto& w: dict){
	// 	cout << w.first << " " << w.second << endl;
	// }