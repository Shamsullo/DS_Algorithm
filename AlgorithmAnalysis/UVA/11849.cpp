#include <iostream>
#include <unordered_set>

using namespace std;

	//CD
int main(){

	while(true){
		
		unordered_set<int> cds;

		int jack; cin >> jack;
		int jill; cin >> jill;
		if(jill == 0 and jill == 0){break;}
		
		// int counter = 0; 

		for(int i = 0; i < jack; i++){
			int n; cin >> n;
			cds.insert(n);
		}
		for (int i = 0; i < jill; i++){
			int n; cin >> n;
			cds.insert(n);
			// bool jackHas = cds.insert(n).second;
			// if(!jackHas){
			// 	++counter;
			// }
		}
		cout << (jack + jill) - cds.size() << endl;
	}
	return 0;
}