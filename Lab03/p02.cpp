#include <iostream>
#include <vector>

using namespace std;

    // Datum
main(){
   
    vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> daysOfWeek = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    
    int day; cin >> day;
    int month; cin >> month;

    int sum = 0;
   
    for(int i = 0; i < month -1; i++) {
        sum += daysInMonths[i];
    }

    sum += day;
    sum %= 7;
    cout << (sum == 0 ? daysOfWeek [6] : daysOfWeek[sum - 1]) << endl;
    
}