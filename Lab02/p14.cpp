#include <iostream>

using namespace std;

main(){
	int a; cin >> a;
	int b; cin >> b;
	int c; cin >> c;

	if (a > b ){
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c){
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > c){
		int temp = a;
		a = c;
		c = temp;
	}

	cout << c - a;

}