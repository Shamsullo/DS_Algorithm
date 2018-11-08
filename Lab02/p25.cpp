#include <iostream>

using namespace std;

	//Double dice

main (){
	int testCase; cin >> testCase;

	int antonia = 100;
	int david = 100;

	for (int i = 0; i < testCase; ++i)
	{
		int antoniaInput; cin >> antoniaInput;
		int davidInput; cin >> davidInput;
		if (antoniaInput > davidInput)
		{
			david -= antoniaInput;
		}else if (davidInput > antoniaInput)
		{
			antonia -= davidInput;
		}
	}
	cout << antonia << endl;
	cout << david << endl;
}