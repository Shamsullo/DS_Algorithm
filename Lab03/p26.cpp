#include <bits/stdc++.h>
using namespace std;
    //Grid summing

main(){
    int sizeOfGrid; cin >> sizeOfGrid;
    vector<vector<int>> grid;
    for(int i = 0; i < sizeOfGrid; ++i){
        vector<int> temp;
        for(int j = 0; j < sizeOfGrid; ++j){
            int input; cin >> input;
            temp.push_back(input);
        }
        grid.push_back(temp);
    }

    int xySet; cin >> xySet;

    vector<int> xy;
    
    for(int i = 0; i < 2 * xySet; i++){
        int input; cin >> input;
        xy.push_back(input);
    }
         
    for(int i = 0; i < 2* xySet; i += 2)    {
       
        int sum = 0;
        
        for(int j = 0; j < sizeOfGrid; j++){
          
            sum += grid[xy[i]- 1][j];
            sum += grid[j][xy[i+1] - 1];
            
        }
        
        cout << sum << endl;
        
    }
    

}