#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
	// the most common letter;

int main(){

	vector<int> v('Z' - 'A' + 1, 0);

	char ch; 
	while(cin.get(ch)){
		if(isalpha(ch)){
			ch = toupper(ch);
			++v[ch - 'A'];
		}
	}

	char letter = 'A';
	for (int c: v){
		if(c != 0)
			cout << letter << ": " << c << endl;
		++letter;
	}

	// vector<iterator> it = max_element(v.begin(), v.end());

	auto max = max_element(v.begin(), v.end());
	cout << "max counter: " << *max << endl;
	cout << "One of the most common letter(the first from alphabit): " << char ('A' + max - v.begin()) << endl;

	// cout << *v.begin() << " and " << max - v.begin();

	return 0;
}