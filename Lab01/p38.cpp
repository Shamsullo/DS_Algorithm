#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// bool cmpSrtByLength(const string& a, const string& b){
// 	return a.size() < b.size();  
// }

void center(vector<string>& text){

	int maxL = (*max_element(text.begin(), text.end(), 
							  [] (const string s1, const string s2)
							  {return s1.size() < s2.size();})).size();
	// int maxL = (*p).size();

	for (auto& s: text)	{
		int ws = maxL - s.size();
		s = string(ws / 2, '_') + s + string(ws / 2 + ws % 2, '_');
	}

}


int main(){
    
    vector<string> t = { 
        "xxxx",
        "AxxxxxxxxxxxxxxxxxxxA",
        "xxxxxxxxxxxxxx",
        "xxxxxxxxxxx"
    };
    
    center(t);
    
    for (const auto& s: t) {
        cout << s << endl;
    }
    
    return 0;
}