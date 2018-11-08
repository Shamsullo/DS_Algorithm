#include <bits/stdc++.h>
using namespace std;
    //Cyclopian suit

main(){
    int n; cin >> n;

    int listSize = 100;
    if (n > 100 and n <= 500){
        listSize = 500;
    }else if (n > 500){
        listSize = 1000;
    }
    vector<int> list (listSize);
    
    for(int i = 0; i < n; i++){
       int input; cin >> input;
       ++list[input - 1];
    }
    
    int max =  *max_element(list.begin(), list.end());
    
    vector<int> result(1);
    for(int i = 0; i < listSize; i++) {
        if(list[i] == max){
            ++result[0];
            result.push_back(i + 1);
        }    
    }  
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
     
}