#include <iostream>

using namespace std;

	//Cost

main(){
	int testCase; cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		int n; cin >> n;
		if (n >= 0 and n <= 30){
			cout << "38" << endl;
		}else if (n > 30 and n <= 50){
			cout << "55" << endl;
		}else if (n > 50 and n <= 100){
			cout << "73" << endl;
		}else if(n > 100){
			n -= 100;
			if (n % 50 == 0){
				n = n / 50;
			}else {
				n = (n / 50) + 1;
			}
			cout << (73 + (n*24)) << endl; 
		}
	}
}
