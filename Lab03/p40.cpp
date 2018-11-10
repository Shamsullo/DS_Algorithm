#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
	// Poetry

vector<string> split(const string& s, char delimiter);
string lastSyllable(vector<string> ss);


int main(){
	string v; getline(cin, v);
	int verses = stoi(v);

	for (int i = 0; i < verses; ++i){
		
		vector<string> ends;
		for (int j = 0; j < 4; ++j) {
			string line; getline(cin, line);
			ends.push_back(lastSyllable(split(line, ' ')));
		}

		if (ends[0].compare(ends[1]) == 0 and ends[1].compare(ends[2]) == 0 and	ends[2].compare(ends[3]) == 0){
			cout << "perfect" << endl;
		}else if(ends[0].compare(ends[1]) == 0 and ends[2].compare(ends[3]) == 0){
			cout << "even" << endl;
		}else if(ends[0].compare(ends[2]) == 0 and ends[1].compare(ends[3]) == 0){
			cout << "cross" << endl;
		}else if(ends[0].compare(ends[3]) == 0 and ends[1].compare(ends[2]) == 0){
			cout << "shell" << endl;
		}else{
			cout << "free" << endl;
		}
	}

	return 0;
}


vector<string> split(const string& s, char delimiter){

   vector<std::string> tokens;
   string token;
   istringstream tokenStream(s);

   while (getline(tokenStream, token, delimiter))  {
      tokens.push_back(token);
   }
   return tokens;
}


string lastSyllable(vector<string> ss){

	string s = ss[ss.size() - 1];

	for (int i = s.size() - 1; i >= 0; --i)	{	
		char c = s.at(i);
		if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
			return s.substr(i, s.size());
		}
	}
	return s;
}
