#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;

const int defaultSize = 4;
const int minSize = 3;
const int maxSize = 6;

int parseUserCommandFromCmd(int argc, char* argv[]){
    int result = defaultSize;

    if(argc == 2){
        istringstream sinp(argv[1]);
        int temp;
        if(sinp >> temp >> ws and sinp.eof()){
            temp = abs(temp);
            result = (temp >= minSize and temp <= maxSize ? temp : defaultSize);
        }
    }
   

    return result;
}

vector<string> fillNumbers(int n){
    
    int lowLimit[] = {102, 1023, 10234, 102345};
    int upLimit[] = {987, 9876, 98765, 987654};

    vector<string> result;
    for (int i = lowLimit[n - minSize]; i <= upLimit[n - minSize]; ++i) {
        string s = to_string(i);
        set<char> ss (s.begin(), s.end());
        if(ss.size() == n){
            result.push_back(s);
        }

    }
    return result;
}

void showDescription(int& n){

    cout << "------------------------------------------------BULLS AND COWS------------------------------------------------------" << endl;
    cout << " Coumputer guessed a " << n <<"-digits number with not repeating digits" << endl;
    cout << " Your task is to find that number!" << endl;
    cout << " After each try computer will give you two line: how many digits you found and how many of them are in their position" << endl;
    cout << "-------------------------------------------------GOOD LUCK!----------------------------------------------------------" << endl;
}

void analyse(string& compNumber, string& userNumber, int& d, int& p){
    d = 0;
    p = 0;
    for (int i = 0; i < userNumber.size(); ++i) {
        for (int j = 0; j < compNumber.size(); ++j) {
            if(userNumber[i] == compNumber[j]){
                ++d;
                p += i == j;
            }
        }
    }
}

string getUserNumber(const vector<string>& numbers){
    for (;;) {
        cout << "Your guess: ";
        string line;
        getline(cin, line);
        istringstream sinp(line);
        int r;
        if(sinp >> r >> ws and sinp.eof()){
            if(binary_search(numbers.begin(), numbers.end(), to_string(r))){
                return to_string(r);
            }
        }
        cout << "Wrong input format, try agian!" << endl;    
    }
    
    
}

int main(int argc, char *argv[]){

    int n = parseUserCommandFromCmd(argc, argv);

    srand(time(0));

    vector<string> numbers =  fillNumbers(n);
    random_shuffle(numbers.begin(), numbers.end());
    string compNumber = numbers.front();

    sort(numbers.begin(), numbers.end());

    showDescription(n);

    int moves = 0;
    int digits = 0;
    int position = 0;

    while(position != n and digits != n){
        string userNumber =  getUserNumber(numbers); 
        analyse(compNumber, userNumber, digits, position);
        cout << "Right digits: " << digits << endl;
        cout << "Right position: " << position << endl;
        ++moves;
    }

    cout << "My guess was " << compNumber << endl;
    cout << "You gueed it in " << moves << (moves == 1 ? " moves." : " move.");

}   