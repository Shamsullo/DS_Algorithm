#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {5, 1, 3, 9, 13, 21, 203};

    auto found = find(v.begin(), v.end(), 11);
    if(found != v.end()){
        cout << "Index of 11: " << found - v.begin() << endl;
    }else{
        cout << "The is not 11 in the vector" << endl;
    }

    found = find_if(v.begin(), v.end(), 
                    [] (int e){return e % 2 == 0;});

    if(found != v.end()){
        cout << "First even number is the list is " << *found << endl;
    }else{
        cout << "there is not even number in the list" << endl;
    }

    return 0;
}