#include <iostream>
using namespace std;

void readAndReverse(){

	int x; cin >> x;
	if(x != 0){
	// for(int i = 0; i < 3; ++i){
		// cin >> x;
		readAndReverse();
		cout << " " << x;
	// }
	}
}


int main(){
	readAndReverse();
	cout << endl;
}