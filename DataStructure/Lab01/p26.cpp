#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;
	// listing

int main(){

	vector<string> lines;

	string line;
	while(getline(cin, line)){
		lines.push_back(line);
	}

	// C++ 98
	// stringstream sout;
	// sout << lines.size();
	// int w =  sout.str().size();

	// C++11
	int w = to_string(lines.size()).size();

	int c = 0;
	for (string& s: lines)
	{
		++c;
		cout << setw(w) << c << ": " << s << endl;
	}
}
