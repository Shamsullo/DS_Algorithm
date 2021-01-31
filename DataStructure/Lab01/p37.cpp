#include <iostream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

string join(const string& joiner, const vector<string>& s){
	
	string result;

	if(!s.empty()){
		result = s.front();
		for(int i = 1; i < s.size(); ++i){
			result += joiner + s[i];
		}

	}
	return result;	
}

vector<string> split(const string& s){

	vector<string> tokens;

	istringstream sinp(s);
	
	string w;
	while(sinp >> w){
		tokens.push_back(w);
	}
	return tokens;

}


main(){
	vector<string> v1 = {"Hello", "World"};
    vector<string> v2 = {"C++", "is", "a", "very", "flexible", "!!!"};
    vector<string> v3 = {"C++"};
    vector<string> v4;
    
    string s1 = join(".", v1);
    string s2 = join(".", v2);
    string s3 = join(".", v3);
    string s4 = join(".", v4);
    
    cout << s1 << endl
         << s2 << endl
         << s3 << endl
         << s4 << endl;
    
    cout << boolalpha;
    
    cout << (s1 == "Hello.World") << endl
         << (s2 == "C++.is.a.very.flexible.!!!") << endl
         << (s3 == "C++") << endl
         << (s4 == "") << endl;
    
    cout << "----" << endl;
    
    vector<string> v5 = split("  Hello World  ");
    vector<string> v6 = split("Hello C++ World !!!");
    
    vector<string> a5 = {"Hello", "World"};
    vector<string> a6 = {"Hello", "C++", "World", "!!!"};
    
    cout << (v5 == a5) << endl;
    cout << (v6 == a6) << endl;
    
    return 0;
}