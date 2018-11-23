#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int testLinearSearch(const vector<int>& v, const int n){

	srand(0);
	int result = 0;

	for (int i = 0; i < n; ++i)	{
		int random = rand();
		result += find(v.begin(), v.end(), random) != v.end();
	}

	return result;
}

int testBinarySearch(const vector<int>& v, const int n){
	srand(0);
	int result = 0;

	for (int i = 0; i < n; ++i)	{
		int random = rand();
		result += binary_search(v.begin(), v.end(), random);
	}

	return result;
}

int main(){

	vector<int> list;
	srand(0);

	const int n = 1000;
	for (int i = 0; i < n; ++i){
		list.push_back(rand());
	}

	clock_t begin =  clock();
	int linearSearch = testLinearSearch(list, n * 2);
	clock_t end = clock();
	cout << "LinearSearch: " << linearSearch << "time: " << double (end - begin) / CLOCKS_PER_SEC << endl;

	begin =  clock();
	int binarySearch = testBinarySearch(list, n * 2);
	end = clock();
	cout << "LinearSearch: " << binarySearch << "time: " << double (end - begin) / CLOCKS_PER_SEC << endl;

	return 0;
}
vector<string> split(string s){

	vector<string> tokes;
	istringstream ss(s);

	string w;
	while(ss >> w){
		tokens.push_back(w);
	}
	return tokens;
}