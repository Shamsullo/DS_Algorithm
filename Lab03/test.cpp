#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string& s, char delimiter)
{
   vector<std::string> tokens;
   string token;
   istringstream tokenStream(s);

   while (getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}
string syllable(vector<string> ss){

	string s = ss[ss.size() - 1];

	for (int i = 0; i < s.size(); ++i)
	{	
		char c = s.at(i);
		if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
			return s.substr(i, s.size());
		}
	}
	return s;
}

int main()
{
    string line; getline(cin, line);

     
    return 0;
}