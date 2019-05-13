#include <bits/stdc++.h>

using namespace std;

	//Mirrored Pairs

main(){
	vector<string> list;
	while(true){
		string input; //cin >> input;
		getline(cin, input);
		if(input.compare("  ") == 0){
			break;
		}
		list.push_back(input);
	}

	cout << "Ready" << endl;
	for (int i = 0; i < list.size(); ++i){
		if (list[i].compare("bd") == 0 or
			list[i].compare("db") == 0 or
			list[i].compare("pq") == 0 or
			list[i].compare("qp") == 0){
			cout << "Mirrored pair" << endl;
		}else{
			cout << "Ordinary pair" << endl;
		}
	}
	

	return 0;
}
