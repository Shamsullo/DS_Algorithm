#include <iostream>

using namespace std;

    //BIJELE

main(){
    int setA[] = {1, 1, 2, 2, 2, 8};
    int setB[6];
    
    for(int i = 0; i < 6; i++){
        int input; cin >> input;
        setB[i] = setA[i] - input; 
    }
    
    for(int i = 0; i < 6; i++)
    {
        cout << setB[i] << " ";
    }
    cout << endl;
    

    
}