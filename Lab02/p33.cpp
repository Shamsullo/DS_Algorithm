#include <iostream>

using namespace std;

main(){
	int t, s, h; cin >> t >> s >> h;

	for (int i = 0; i < t; ++i)	{
		for (int k = 0; k < 3; ++k){
			cout << "*"; 
			if(k != 2){
				for (int j = 0; j < s; ++j)
				{
					cout << " ";
				}
			}			
		}
		cout << endl;		
	}

	for (int i = 0; i < (s * 2 + 3); ++i){
		cout << "*";
	}
	cout << endl;
	
	for (int i = 0; i < h; ++i){
		int m = (s*2 + 3) / 2;
		if (m % 2 != 0)
			m++;
		for (int j = 1; j <= m; ++j){
			if (j == m){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}