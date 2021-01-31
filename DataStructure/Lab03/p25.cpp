#include <bits/stdc++.h>
using namespace std;
    //Sounds fishy!

main(){
    vector<int> list;
    
    for(int i = 0; i < 4; i++){
        int input; cin >> input;
        list.push_back(input);
    }
    
    vector<int> sortedList = list;
    sort (sortedList.begin(), sortedList.end());
    
    vector<int> sortedAnsReversedList = sortedList;
    reverse (sortedAnsReversedList.begin(), sortedAnsReversedList.end());

    if (list[0] == list[1] and list[2] == list[3] and list[1] == list[2]){
        cout << "Fish At Constant Depth" << endl;
    }else if (sortedList == list){
        cout << "Fish Rising" << endl;
    }else if(sortedAnsReversedList == list){
        cout << "Fish Diving" << endl;
    }else{
        cout << "No Fish" << endl;
    }

}