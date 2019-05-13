#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

main(){
    int testCase; cin >> testCase;

    vector<int> s; 
    
    for(int i = 0; i < testCase; i++){
        int input; cin >> input;
        s.push_back(input);    
    }

    sort(s.begin(), s.end());

    for(int e: s){
        cout << e << endl;
    }


    
}