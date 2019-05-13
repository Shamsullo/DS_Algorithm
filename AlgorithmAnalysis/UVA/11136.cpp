#include <iostream>
#include <set>


using namespace std;

int main(){

	int input; cin >> input;
	while(input != 0){

		multiset<int64_t> box;
		int64_t result = 0;

		for (int i = 0; i < input; ++i)	{
			int ticketsAdded; cin >> ticketsAdded;
			for (int i = 0; i < ticketsAdded; ++i)
			{
				int64_t temp; cin >> temp;
				box.insert(temp);
			}
			result += *(--box.end()) - *(box.begin());
			box.erase(box.begin());
			box.erase(--box.end());
		}

		cout << result << endl;
		
		cin >> input;
	}
}