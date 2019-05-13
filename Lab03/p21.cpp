#include <bits/stdc++.h>

using namespace std;
    //Mjehuric
main(){
    vector<int> list;
    
    for(int i = 0; i < 5; i++){
        int input; cin >> input;
        list.push_back(input);
    }
    
    for(int y = 0; y < 5; y++){
        int i = 0;
        int j = 1;
        bool swaped = false;
        while(j < 5){
            if (list[i] > list[j]){
                swap (list[i], list[j]);
                swaped = true;
            }
            if (swaped){
                swaped = false;
                for(int x = 0; x < 5; x++){
                cout  <<  list[x] << " ";
                }
                cout << endl;
            }
            ++i;
            ++j;
        }
    } 
}