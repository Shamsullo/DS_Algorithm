#include <iostream>
#include <string>
#include <vector>
	
using namespace  std;
	// First Blank

main(){

	string line1;
	getline(cin, line1);

	int numberOfLines = stoi(line1);
	vector<int> indexOfFirstSpaces;

	for (int i = 0; i < numberOfLines; ++i){
		string line2;
		getline(cin, line2);

		int s = line2.find(' ');

		if (s < line2.size() and s >= 0){
			indexOfFirstSpaces.push_back(s + 1);
		}else{
			indexOfFirstSpaces.push_back(0);
		}
	}

	for (int i = 0; i < numberOfLines; ++i)	{
		cout << indexOfFirstSpaces[i] << endl;
	}

	return 0;
}