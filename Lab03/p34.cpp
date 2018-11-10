#include <iostream>
#include <string>
#include <vector>

using namespace std;
	//Mispelling

main(){

	int testCase; cin >> testCase;
	vector<string> v;

	for (int i = 1; i <= testCase; ++i){
		
		//vector<int> mispellingIndices;

		int indexOfChar; cin >> indexOfChar;
		indexOfChar -= 1;
		//mispellingIndices.push_back(indexOfChar);
		
		string str; cin >> str;
		str.erase(str.begin() + indexOfChar);
		v.push_back(str);
		// cout << i << " " << str << endl;
	}

	for (int i = 0; i < testCase; ++i)
	{
		cout << i + 1 << " " << v[i] << endl;
	}

	return 0;
}