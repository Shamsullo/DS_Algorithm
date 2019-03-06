#include <iostream>
#include <unordered_map>

using namespace std;
	//Just prume the list

int main(){

	// int testCase; cin >> testCase;

	// for(int i = 0; i < testCase; ++i){

	// 	int a; cin >> a;
	// 	int b; cin >> b;

		unordered_multimap<int, int> lists;

	// 	for(int j = 0; j < a; ++j){
	// 		int temp; cin >> temp;
	// 		lists.insert(make_pair(a, temp));
	// 	}

	// 	for(int j = 0; j < b; ++j){
	// 		int temp; cin >> temp;
	// 		if 
	// 	}
	// }

		lists.insert(make_pair(1, 2));
		lists.insert(make_pair(1, 3));
		lists.insert(make_pair(1, 1));

		lists.insert(make_pair(2, 1));
		lists.insert(make_pair(2, 3));
		lists.insert(make_pair(2, 4));
		lists.insert(make_pair(2, 2));

		for(auto it =  lists.begin(); it != lists.end(); ++it){
			cout << it->first << " - " << it->second << endl;
		}

		if(lists.count(4) == 0){
			cout << "a does not have 4\n";
		}else{
			cout << "there is 4 in the a\n";
		}

	AA008QYX68

	return 0;
}