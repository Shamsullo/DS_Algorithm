#include <iostream>
#include <vector>

using namespace std;

    //Multiple Choice
main(){
    int n; cin >> n;
    vector<char> student;
    vector<char> teacher;
    for(int i = 0; i < n; i++) {
        char studendAnswer; cin >> studendAnswer;
        student.push_back(studendAnswer);
    }
    for(int i = 0; i < n; i++){
        char teacherAnswer; cin >> teacherAnswer;
        teacher.push_back(teacherAnswer);
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        if (student[i] == teacher[i]){
            ++result;
        }
    }

    cout << result << endl;
    
    
}