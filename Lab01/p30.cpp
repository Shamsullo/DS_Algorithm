#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> list;
	list.reserve(4000);

	cout << "capacity: " << list.capacity() << endl;
	cout << "siz: " << list.size() << endl;

	int n; cin >> n;
	for (int i = 0; i < n; ++i)	{
		list.push_back(i);
		
	}
	cout << "capacity: " << list.capacity() << endl;
	cout << "siz: " << list.size() << endl;

}