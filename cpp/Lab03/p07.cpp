#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

    //Cyclopian Cash

main(){
    vector<int> size;

    int testCase; cin >> testCase;
    
    for(int i = 0; i < testCase; i++)    {
        int input; cin >> input;
        size.push_back(input);
    }

    sort(size.begin(), size.end());

    if (size.size() % 2 == 0){
        cout << fixed << setprecision(1) << (size[size.size() / 2 - 1] + size[size.size() / 2]) / 2.0 << endl;
    }else{
        cout << fixed << setprecision (1) <<  (double)size[size.size() / 2]  << endl;
    }
    

}