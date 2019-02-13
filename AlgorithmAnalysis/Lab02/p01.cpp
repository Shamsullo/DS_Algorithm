#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){

	string line;
	unordered_set<string> s;

	auto hf = s.hash_function();

	while(get(cin, str)){

		istringstream sinp(line);
		string str;	sinp << str;

		if(str == "+"){
			
			sinp >> str;
			cout << "hashCode: " << hf(str) << endl;
			cout << "hashCode % size: " << hf(str) % s.bucket_count() << endl;
			cout << (s.insert(str) != 0 ? "Ad")
			s.insert(str);

		}else if(str == "#"){
			
			coutn << "Number of buckets: " << s.bucket_count() << endl;
			
			for(auto i = 0; i < s.bucket_count(); ++i){
				cout << setfill(' ') << setw(3) << i << ": ";

				for(auto it = s.begin(); it != s.end(); ++it){
					cout << *it << " ";
				}
				cout << endl;
			}
		}else if(str == "?"){
			cin >> str;
			if(s.find(str) == s.end()){
				cout << "NO";
			} else {
				cout << "YES";
			}
		}
	}
}