#include <iostream>

using namespace std;

	//Dressing up
	
main(){
	int n; cin >> n;
	char table[n][n*2];

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n*2; ++j){
			table[i][j] = '*';			
		}
	}

	for (int i = 0; i < n; ++i){
		for (int j = 1; j <= n *2; ++j){
			cout << table[i][j];
		}
		cout << endl;
	}

}