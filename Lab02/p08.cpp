#include <iostream>
using namespace std;

// Cross Country

main(){
	char ch; cin >> ch;

	if (ch == 'M'){
		char s; cin >> s;
		if (s == 'G'){
			cout << "midget girls" << endl;
		}else if (s == 'B'){
			cout << "midget boys" << endl;
		}
	}else if (ch == 'J'){
			char s; cin >> s;
		if (s == 'G'){
			cout << "junior girls" << endl;
		}else if (s == 'B'){
			cout << "junior boys" << endl;
		}
	}else if (ch == 'S'){
			char s; cin >> s;
		if (s == 'G'){
			cout << "senior girls" << endl;
		}else if (s == 'B'){
			cout << "senior boys" << endl;
		}
	}else {
		cout << "invalid code." << endl;
	}
}