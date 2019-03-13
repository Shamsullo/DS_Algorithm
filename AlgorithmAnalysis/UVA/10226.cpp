#include <iostream>
#include <map>
#include <string>
#include <iomanip>


using namespace std;

int main(){

	int testCase; cin >> testCase;

		string name;
		getline(cin, name);
		getline(cin, name);
	
	for (int i = 0; i < testCase; ++i){
		
			
		map<string, double> t;

		double c = 0; 
		while(getline(cin, name)){
			if(name.empty()){break;}
			++t[name];
			++c;
		}

		for(auto& a: t){
			cout << setprecision(4) << fixed;
			cout << a.first << " " << a.second * (double) (100) / c << endl; 
		}

		if(i < (testCase - 1))
			cout << endl;

	}


}