#include <iostream>
#include <unordered_map>

using namespace std;
	//Just prume the list

int main(){

	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i){
		
		unordered_map<int, int> aMap;
		unordered_map<int, int> bMap;

		int a; cin >> a;
		int b; cin >> b;
		int rCounter = 0;

		for(int j = 0; j < a; ++j){
			int temp; cin >> temp;
			++aMap[temp];
		}

		for (int j = 0; j < b; ++j){
			int temp; cin >> temp;
			if(aMap.find(temp) != aMap.end()){
				++bMap[temp];
			}else{
				++rCounter;
			}
		}

		for(auto& n: aMap){
			auto f =  bMap.find(n.first);
			if(f != bMap.end()){
				int d = aMap[n.first] - bMap[n.first];
				rCounter += (d < 0 ? (-1)* d : d);
			}else{
				aMap.erase(n.first);
				++rCounter;
			}
		}

		cout << rCounter << endl;

		cout << "aMap: ";
		for(auto& a: aMap){
			cout << a.first << " -- " << a.second << " ";
		}
		cout << endl;

		cout << "bMap: ";
		for(auto& b: bMap){
			cout << b.first << " -- " << b.second << " ";
		}
		cout << endl;
	}

	return 0;

}

	// AA008QYX68
