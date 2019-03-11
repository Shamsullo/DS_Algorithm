#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
	//Slogan Learning of Princess

int main(){

	int n; cin >> n;
	unordered_map<string, string> slogans;

	for (int i = 1; i <= n; ++i){
		
		string first; getline(cin, first);
		getline(cin, first);
		cout << i << ": " << first; 
		string second; getline(cin, second);
		getline(cin, second);
		cout << " -- "<< first << endl;

		slogans[first] = second;
	}
	// for(auto& a: slogans){
	// 	cout << a.first << " -- " << a.second << endl;
	// }

	// int test; cin >> test;
	// for (int i = 0; i < test; ++i) {
	// 	string first; getline(cin, first);

	// 	cout << slogans[first] << endl;;
	// }


}