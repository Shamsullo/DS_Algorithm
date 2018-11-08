#include <iostream>
#include <vector>

using namespace std;
    //Payment

main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    while(true){
        int input; cin >> input;
        if(input == (-1)){
            break;
        }
        if (input >= 0 and input < 10000)
            a++;
        if (input >= 10000 and input < 20000)
            b++;
        if (input >= 20000 and input < 30000)
            c++;
        if (input >= 30000 and input < 40000)
            d++;
        if (input >= 40000 and input < 50000)
            e++;
        if (input >= 50000 and input <= 1000000)
            f++;
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}