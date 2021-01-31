#include <iostream>
#include <vector>
#include <string>

using namespace std;

        //Returning Home 
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
        cin >> str;
    }

    for(int i = streets.size() - 1; i >= 0; i--){
        if (directions[i+1].compare("R") == 0){
            cout << "Turn LEFT onto " << streets[i] << endl; 
        }else{
            cout << "Turn RIGHT onto " << streets[i] << endl; 
        }
    }
    
    cout << (directions.front().compare("R") == 0 ? "Turn LEFT onto your HOME." :"Turn RIGHT onto your HOME.") << endl;
    
    return 0;
}