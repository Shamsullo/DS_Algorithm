#include <iostream>
#include <algorithm>

using namespace std;

main(){

	cout << "a: ";
	int32_t a; cin >> a;
	cout << "int32_t size: " << sizeof(int32_t) << endl;

	cout << "b: ";
	int32_t b; cin >> b;

	if(a > b){
		swap(a, b);
	}

	int64_t sum = 0;
	cout << "int64_t size: " << sizeof(int64_t) << endl;
	for (int i = a; i <= b; ++i){
		sum += i;
	}

	cout << "sum (" << a << "," << b << ") = " << sum << endl;

	sum = int64_t(a + b) * (b - a + 1) / 2;
	cout << "sum (" << a << "," << b << ") = " << sum << endl; 

	return 0;
}