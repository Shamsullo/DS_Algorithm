#include <iostream>

using namespace std;

main(){
    int burger[] = {461, 431, 420, 0};
    int side[] = {100, 57, 70, 0};
    int drink[] = {130, 160, 118, 0};
    int dessert[] ={167, 266, 75, 0};

    int input; cin >> input;
    int calorie = burger[input - 1];
    int input1; cin >> input1;
    calorie += side[input1 - 1];
    int input2; cin >> input2;
    calorie += drink[input2 -1];
    int input3; cin >> input3;
    calorie += dessert[input3 - 1];


    // int input; cin >> input;
    // int calorie = burger[input - 1];
    // input >> cin;
    // calorie += side[input - 1];
    // input >> cin;
    // calorie += drink[input -1];
    // input >> cin;
    // calorie += dessert[input - 1];

    cout << "Your total Calorie count is " << calorie << "."<< endl; 

}
