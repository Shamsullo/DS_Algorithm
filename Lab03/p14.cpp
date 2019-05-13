#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

        //Cell-Phone Messaging  
main(){
    vector<string> streets;
    vector<string> directions;
    string str; cin >> str;
    while(str.compare("SCHOOL") != 0){
        if (str.size() == 1){
            directions.push_back(str);
        }else{
            streets.push_back(str);
        }
    }
    reverse(streets.begin(), streets.end());
    streets[0] = "HOME";
    for(int i = 0; i >= directions.size(); i -= 2){
        if (directions[i].compare("R") == 0){
            cout << "Turn LEFT" << "i" << endl; 
        }
    }
    
    return 0;
}