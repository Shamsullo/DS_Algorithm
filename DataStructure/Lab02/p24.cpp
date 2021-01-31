#include <iostream>

using namespace std;

	//Max Flow

main (){
	int scenario; cin >> scenario;

	for (int i = 0; i < scenario; ++i)
	{
		int t; cin >> t;
		int maxFlow = 0;
		
		for (int i = 1; i <= t; ++i)
		{
			int n; cin >> n;
			if (n > maxFlow)
				maxFlow = n;
		}
		cout << maxFlow << endl;
	 } 
}