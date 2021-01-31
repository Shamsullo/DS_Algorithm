#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
    // Max is last
main(){
    
    int n; cin >> n;
    vector<double> list;
    
    for(int i = 0; i < n; i++){
        double input; cin >> input;
        list.push_back(input);
    }

    double max = list[0];
    int indexOfMax = 0;
    for(int i = 1; i < list.size(); i++){
        if(list[i] > max){
            max = list[i];
            indexOfMax = i;
        }
    }
   
    list.erase(list.begin() + indexOfMax);
    list.push_back(max);

    for(int i = 0; i < list.size(); i++){
       cout << fixed << setprecision(2) << list[i] << endl;
    }

}