#include <iostream>
#include <set>

using namespace std;
	// Happy number

	set<int> s;

int happy(int n){
	int sum = 0;
	if(sum <= 9){
		s.insert(n);
		return n;
	}
	while(n != 0){
		sum = (n%10)*(n%10);
		n /= 10;
	}
	s.insert(sum);
	happy(sum);
}


int main(){

	int testCase; cin >> testCase;
	for (int i = 1; i <= testCase; ++i)
	{
	
		int a; cin >> a;
		int f = happy(a);
	
		cout << "Case #" << i << ": ";
		// int f = *(s.begin());
		if(f == 1 or f == 7){
			cout << a << " is a Happy number"<< endl;
		}else{
			cout << a << " is an Unhappy number"<< endl;
		}

		for(auto& a: s){
			cout << a << " ";
		}
		cout << endl;

	}


}
