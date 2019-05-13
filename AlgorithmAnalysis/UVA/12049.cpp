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

				// int  = 1;
		for(auto& n: aMap){
			auto f =  bMap.find(n.first);
			if(f != bMap.end()){
				int d = aMap[n.second] - bMap[n.second];
				// cout << o << ": " << d << endl; 
				if(d < 0){
					rCounter += (-1) * d;
				}else {
					rCounter += d;
				}
				// rCounter += (d < 0 ? (-1)* d : d);
			}else{
				// aMap[n.first] = 0;
				// aMap.erase(n.f1);
				rCounter += aMap[n.second];
			}
			// ++o;
		}

		cout << rCounter << endl;

		// cout << "aMap: ";
		// for(auto& a: aMap){
		// 	cout << a.first << " -- " << a.second << " ";
		// }
		// cout << endl;

		// cout << "bMap: ";
		// for(auto& b: bMap){
		// 	cout << b.first << " -- " << b.second << " ";
		// }
		// cout << endl;
	}

	return 0;

}

	// AA008QYX68
