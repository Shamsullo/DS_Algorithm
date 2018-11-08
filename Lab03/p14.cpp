#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

        //Cell-Phone Messaging  
main(){
    vector<char> k2 = {'a', 'b', 'c'};
    vector<char> k3 = {'d', 'e', 'f'};
    vector<char> k4 = {'g', 'h', 'i'};
    vector<char> k5 = {'j', 'k', 'l'};
    vector<char> k6 = {'m', 'n', 'o'};
    vector<char> k7 = {'p', 'q', 'r', 's'};
    vector<char> k8 = {'t', 'u', 'v'};
    vector<char> k9 = {'w', 'x', 'y', 'z'}; 
   // vector<char> alphabit = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
     //                           'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string alphabit = "abcdefghijklmnopqrstuvwxyz";
    string input; cin >> input;
    while(input.compare("half") != 0){
        //sort(input.begin(), input.end());
        for(int i = 0; i < input.size(); i++){
            int chPosition = alphabit.find(input.at(i)) + 1;
            int button = (int)ceil((chPosition/3.0)) + 1;
            // int bCounter = 2;
            // int lCountr = 0;
            // for (int i = 0; i < chPosition; i++){
                 
            // }
            cout << "pos: "<< chPosition << endl;
            cout << "key: " << button << endl;
        }
        cin >> input;


        
        for(int i = 0; i < input.size(); i++){
            
        }
        







    }
    

    return 0;
}