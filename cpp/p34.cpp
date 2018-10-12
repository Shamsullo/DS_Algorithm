#include <iostream>

using namespace std;

    //Dressing up.

main(){
    int input; cin >> input;

    for(int i = 1; i <= input; i += 2){

        for(int k = 0; k < i; k++) {
            cout << "*";
        }
        for(int k = 0; k < 2*(input-i); k++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
            
        
    }

    for(int i = input - 2; i >= 1 ; i -= 2){

        for(int k = 0; k < i; k++) {
            cout << "*";
        }
        for(int k = 0; k < 2*(input-i); k++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
            
        
    }
    
}