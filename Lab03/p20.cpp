// #include <iostream>
// #include <string>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;
    // Rope Unfolding
main(){
    int folds; cin >> folds;
    string rope = "";
    vector<string> foldedRope;

    for(int i = 0; i < folds; i++) {
        string input; cin >> input; 
        
        if(folds / 2 == 0){
            if (i / 2 != 0){
                reverse (input.begin(), input.end());
            }
        }else if(folds / 2 != 0){
            if(i / 2 == 0){
                reverse (input.begin(), input.end());
            }
        }    

        foldedRope.push_back(input);
    }

    for (int i = folds - 1; i >= 0; i--){
        cout << foldedRope[i];
    }
    cout << endl;  
}
