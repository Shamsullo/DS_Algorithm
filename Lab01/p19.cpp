#include <iostream>
#include <vector>

using namespace std;

main(){

	vector<vector<int>> v = {
        {3, 1, 4, 5, 6},
        {1, 3, -2},
        {5, -1, 4, -4}
    };

    int row = 0; 
    int col = 0;
    bool found = false;

    for (int i = 0; i < v.size(); ++i){
    	for (int j = 0; j < v[i].size(); ++j){
    		if (v[i][j] < 0){
    			row = i;
    			col = j;
    			found = true;
    			goto brkForFor;
    		}
    	}
    }
 brkForFor:
 	if(found){
 		cout << "the first nagative number: " <<  v[row][col] << endl;
 	}else{
 		cout << "No negative number!" << endl;
 	}

 	return 0;   
}
