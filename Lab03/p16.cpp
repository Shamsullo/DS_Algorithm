#include <iostream>
#include <vector>
using namespace std;
    // Connnect 4

main(){
    int testCases; cin >> testCases;
    for(int x = 0; x < testCases; x++){

        vector<vector<char>> gridXO;
        for(int i = 0; i < 4; i++){
            vector<char> temp;
            for(int j = 0; j < 4; j++){
                char input; cin >> input;
                temp.push_back(input);
            }
            gridXO.push_back(temp);
        }
        
        int dCounter = 0, hCounter = 0, wCounter = 0;
        bool yesNo = false;
        //Checking Diagonals
        for(int i = 0; i < 4; i++){
            if(gridXO[i][i] == 'X')
                ++dCounter;
            
        }
        if (dCounter != 4){
            dCounter = 0;
            int j = 0;
            for(int i = 3; i <= 0; i--){
                if(gridXO[i][j] == 'X')
                    ++dCounter;
                ++j;
            }
            if (dCounter == 4)
                yesNo = true;
        }else if (dCounter == 4){
            yesNo = true;
        }
        //Checking hights
        if (yesNo == false){
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(gridXO[i][j] == 'X'){
                        ++hCounter;
                    }
                }
                if(hCounter == 4){
                    yesNo = true;
                    break;
                }
                hCounter = 0;
            }
        }
        if(yesNo == false){
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(gridXO[j][i] == 'X'){
                        ++wCounter;
                    }
                }
                if(wCounter == 4){
                    yesNo = true;
                    break;
                }
                wCounter = 0;
            }    
        }
           
        cout << (yesNo ? "Yes" : "No") << endl;

    }
 
    
}