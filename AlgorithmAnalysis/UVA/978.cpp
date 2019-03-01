#include <iostream>
#include <set>

using namespace std;
// 978 Lemings battle

int main(){

	int testCase; cin >> testCase;

	for(int i = 0; i < testCase; ++i){

		multiset<int, greater<int>> gl;
		multiset<int, greater<int>> bl; 

		int bf; cin >> bf;
		int g; cin >> g;
		int b; cin >> b;

		for (int j = 0; j < g; ++j){
			int temp; cin >> temp;
			gl.insert(temp);
		}

		for (int j = 0; j < b; ++j){
			int temp; cin >> temp;
			bl.insert(temp);
		}

		while(true){

			if(bl.empty() or gl.empty()){break;}

			int battle = *gl.begin() - *bl.begin();
	
			bl.erase(bl.begin());
			gl.erase(gl.begin());
	
			if(battle < 0){
				bl.insert(-battle);
			}else if(battle > 0){
				gl.insert(battle);
			}
					
		}

		if(gl.empty() and bl.empty()){
			cout << "green and blue died\n";
		}else if (gl.empty()){
			cout << "blue wins\n";
			for(auto a: bl){
				cout << a << endl;
			}
		}else if(bl.empty()){
			cout << "green wins\n";
			for(auto a: gl){
				cout << a << endl;
			}
		}	

	}


	return 0;
}
