#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

    //NOTE

main(){
    
    vector<int> set;
    for(int i = 0; i < 8; i++) {
        int input; cin >> input;
        set.push_back(input);
    }
    
    vector<int> ascendingSet = set;
    sort(ascendingSet.begin(), ascendingSet.end());

    vector<int> descendingSet;
    for(int i = 7; i >= 0; i--){
        descendingSet.push_back(ascendingSet[i]);
    }
    
    if (set == ascendingSet){
        cout << "ascending" << endl; 
    }else if(set == descendingSet){
        cout << "descending" << endl;
    }else{
        cout << "mixed" << endl;
    }

}