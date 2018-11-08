#include <iostream>
#include <cmath>

using namespace std;

	//Pictures Perfect

main(){

	while (true){
		double c; cin >> c;
		if (c == 0)
			break;
		int root = (int)sqrt(c);
		if (root * root == c){
			cout << "Minimum perimeter is " << 4*root 
				 << " with dimensions " << root << " x " << root << endl;
		}else {
			int i = root + 1;
			int j = root + 1;
			while((i * j) != c){
				--i;
				++j;
				if (i == 1)
					break;
			}
			if (i == 1){
				cout << "Minimum perimeter is " << 2*(i + (c - 1)) << " with dimensions " << i << " x " << c - 1 << endl;
			}else{
				cout << "Minimum perimeter is " << 2*(i + j) << " with dimensions " << i << " x " << j << endl;
			}
		}
	}

}