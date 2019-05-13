#include <iostream>
#include <sstream>
#include <string>

using namespace std;
	// Average Grade Calculation

int main(){

	string line;
	while(getline(cin, line)){
		if(line.empty()){
			cout << line << endl;
		}else{
			istringstream sinp(line);
			string name; sinp >> name;
			int sum = 0;
			int numberOfGrades = 0;
			int grade;
			while(sinp >> grade){
				sum += grade;
				++numberOfGrades;
			}
			cout << name << ": " << sum /numberOfGrades << endl;
		}

	}
}