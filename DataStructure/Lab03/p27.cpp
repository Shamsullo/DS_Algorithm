#include <iostream>
#include <string>

using namespace std;

	//Fight or Flight

main(){

	string capitanAmerica; cin >> capitanAmerica;
	string thor; cin >> thor;
	
	if(capitanAmerica.compare(thor) == 0){
		cout << thor << endl;
	}else{
		cout << "Undecided" << endl;
	}

	return 0;
}