#include <iostream>
#include <vector>
#include <string>

using namespace std;

    // Trik

main(){
    
    vector<int> cups = {1, 2, 3};
    
    char input;
    while (cin >> input){
        if (input == 'A'){
            int temp = cups[0];
            cups[0] = cups[1];
            cups[1] = temp;
        }else if (input == 'B'){
            int temp = cups[1];
            cups[1] = cups [2];
            cups[2] = temp;
        }else if(input == 'C'){
            int temp = cups[0];
            cups[0] = cups[2];
            cups[2] = temp;
        }
    }
    for(int i = 0; i < cups.size(); i++)    {
        if (cups[i] == 1){
            cout << i + 1 << endl;
            break;
        }
    }
    

}