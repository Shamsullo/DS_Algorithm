#include <iostream>
#include <algorithm>

using namespace std;

main(){

	cout << "a: ";
	int32_t a; cin >> a;
	cout << "int32_t size: " << sizeof(int32_t) << endl;

	cout << "b: ";
	int32_t b; cin >> b;

	if(a <= b) goto L1;
		swap(a, b);
 L1:
	int64_t sum = 0;
	cout << "int64_t size: " << sizeof(int64_t) << endl;

	int i = a;
 L2:
	if (i > b) goto L3;
	sum += i;
	++i;
	goto L2;
	
 L3:
	cout << "sum (" << a << "," << b << ") = " << sum << endl;

	sum = int64_t(a + b) * (b - a + 1) / 2;
	cout << "sum (" << a << "," << b << ") = " << sum << endl; 

	return 0;
}