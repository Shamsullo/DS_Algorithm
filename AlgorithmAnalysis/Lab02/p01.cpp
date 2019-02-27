#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){

	unordered_set<string> s;

	auto hf = s.hash_function();
	string line;

	while(getline(cin, line)){

		istringstream sinp(line);
		string str;	sinp >> str;

		if(str == "+"){
			
			sinp >> str;
			cout << "hashCode: " << hf(str) << endl;
			cout << "hashCode % size: " << hf(str) % s.bucket_count() << endl;
			cout << (s.insert(str).second ? "Added!" : "Error, already exist!") << endl;

		}else if(str == "#"){
			
			cout << "Number of buckets: " << s.bucket_count() << endl;
			
			for(auto i = 0; i < s.bucket_count(); ++i){
				cout  << setw(3) << i << ": ";

				for(auto it = s.begin(i); it != s.end(i); ++it){
					cout << *it << " ";
				}
				cout << endl;
			}
		}else if(str == "?"){
			
			sinp >> str;
			cout << "hashCode: " << hf(str) << endl;
			cout << "hashCode % size: " << hf(str) % s.bucket_count() << endl;
			auto it = s.find(str);
			cout << (it != s.end() ? "Found" : "Does not exist") << endl;

		}else if(str == "-"){
			sinp >> str;
			cout << "hashCode: " << hf(str) << endl;
			cout << "hashCode % size: " << hf(str) % s.bucket_count() << endl;
			cout << (s.erase(str) ? "ok" : "does not exist") << endl;
		}
	}
}