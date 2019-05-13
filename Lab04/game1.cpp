#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <sstream>
#include <set>

using namespace std;

vector<string> fillGuesses(){
	
	vector<string> guesses;
	for (int i = 1023; i < 9876; ++i){
		string s = to_string(i);
		set<char> ss(s.begin(), s.end());
		if(ss.size()  == s.size())
			guesses.push_back(s);
	}
	return guesses;	
}

bool parse(string& line, int& r){
	istringstream sinp(line);\
	return sinp >> r >> ws and sinp.eof();
}

int getAnswer(const string& msg, int a, int b){
	
	for (;;){
		cout << msg;
		string line; getline(cin, line);
		int r;
		if(parse(line, r) and r >= a and r <= b){
			return r;
		}
		cout << "Incorrect input. Try again!" << endl;
	}	
}
void countBullsCows(string s, string g, int& td, int& tp){

	td = 0, 
	tp = 0;

	for (int i = 0; i < g.size(); ++i)	{
		for (int j = 0; j < s.size(); ++j)	{
			if(g[i] == s[j]){
				++td;
				tp += i == j;
			}
		}
	}

}

vector<string> filter(vector<string>& v, int d, int p){

	vector<string> result;
	string g = v.front();
	for (auto& s: v){
		int td;
		int tp;
		countBullsCows(g, s, td, tp);
		if(d == td and p == tp){
			result.push_back(s);
		}

	}
	return result;
}


int main(){

	srand(time(0));
	vector<string> guesses = fillGuesses();
	random_shuffle (guesses.begin(), guesses.end());

	for (;;){
		
		cout << "My guess: " << guesses.front() << endl;

		int d = getAnswer("How many digits did I find: ", 0, 4);
		int p = getAnswer("How many digits are in their position: ", 0, 4);

		if(d == 4 and p == 4){
			cout << "this is your number: " << guesses.front() << endl;
			break;
		}

		guesses = filter(guesses, d, p);

		if(guesses.empty()){
			cout << "Cheating! This is not a good thing to do :(" << endl;
			break;
		}

		random_shuffle (guesses.begin(), guesses.end());

	}

}