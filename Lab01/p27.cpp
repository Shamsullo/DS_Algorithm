#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
	// Multiplication Table
int main(){

	cout << "give me the size of multiplucation table: ";
	int n; cin >> n;
	cout << n << "x" << n <<  endl;
	int w = to_string(n * n).size() + 1;

	ostringstream table;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			table << setw(w) << i * j;
		}
		table << endl;
	}
	cout << table.str() << endl;

	return 0;
}