#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
	// Do Your Own Homework!

int main(){

	int testCase; cin >> testCase;

	for (int i = 1; i <= testCase; ++i)
	{
		unordered_map<string, int> sub;
		int numberHw; cin >> numberHw;
		
		for (int j = 0; j < numberHw; ++j)
		{
			string subject; cin >> subject; 
			int time; cin >> time;

			sub[subject] = time;
		}

		int sparrowTime; cin >> sparrowTime;
		string sparrow; cin >> sparrow;

		cout << "Case " << i << ": ";


		if(sub.find(sparrow) == sub.end() or sub[sparrow] > (sparrowTime + 5)){
			cout << "Do your own homework!" << endl;
		}else if(sub[sparrow] <= sparrowTime){
			cout << "Yesss" << endl;
		}else if (sub[sparrow] <= (sparrowTime + 5)){
			cout << "Late" << endl;
		}
	}

}