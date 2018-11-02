#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

    //Filip

main(){

    string a; cin >> a;
    string b; cin >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a > b){
        cout << a;
    }else{
        cout << b;
    }
   
}
// 18 28 37 40 49 69