#include <bits/stdc++.h>

using namespace std;

	// ABC

main(){

	vector<int> list;
	for (int i = 0; i < 3; ++i)	{
		int input; cin >> input;
		list.push_back(input);
	}
	string desiredOrder; cin >> desiredOrder;

	sort(list.begin(), list.end());

	for (int i = 0; i < desiredOrder.size(); ++i){
		
		if(desiredOrder.at(i) == 'A'){
			cout << list[0];
		}else if(desiredOrder.at(i) == 'B'){
			cout << list[1];
		}else if(desiredOrder.at(i) == 'C'){
			cout << list[2];
		}
		cout << " ";
	}

}