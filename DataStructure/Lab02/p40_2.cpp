#include <iostream>

using namespace std;

    //Do not pass me the ball!

main(){
    int a; cin >> a;
    int b; cin >> b;
    cout << modInverse (a, b);
    cout << (modInverse(a, b) != 0 ?  modInverse(a, b) : "No such integer exists.") << endl;

    return 0;
}

int modInverse(int n, int m){
    
    for(int x = 1; x < m; x++)
    {
        if ((x * n) % m == 1){
            return x;
        }else{
            return 0;
        }
    }    
}
