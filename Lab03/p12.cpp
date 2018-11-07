#include <iostream>
#include <vector>
#include <string>

using namespace std;

main(){
    int nAdjective; cin >> nAdjective;
    int nNoun; cin >> nNoun;
    vector<string> adjectives;
    vector<string> nouns;
    
    for(int i = 0; i < nAdjective; i++){
        string temp; cin >> temp;
        adjectives.push_back(temp);
        //adjectives.push_back(cin);
    }
    for(int i = 0; i < nNoun; i++){
        string temp; cin >> temp;
        nouns.push_back(temp);
    }
    
    for(int i = 0; i < nAdjective; i++){
        for(int j = 0; j < nNoun; j++){
            cout << adjectives[i] << " as " << nouns[j] << endl;
        }   
    }
     
    // int nAdjective; cin >> nAdjective;
    // int nNoun; cin >> nNoun;
    // vector<string> adjectives[nAdjective];
    // vector<string> nouns[nNoun];
    
    // for(int i = 0; i < nAdjective; i++){
    //     cin >> adjectives[i];
    // }
    // for(int i = 0; i < nNoun; i++){

    //     cin >> nouns[i];
    // }
    
    // for(int i = 0; i < nAdjective; i++){
    //     for(int j = 0; j < nNoun; j++){
    //         cout << adjectives[i] << " as " << nouns[j] << endl;
    //     }   
    // }


    return 0;
}