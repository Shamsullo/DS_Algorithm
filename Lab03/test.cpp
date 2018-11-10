#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string n; getline(cin, n);
    int numberOfLines = stoi(n);
    
    for(int i = 0 ; i < numberOfLines; i ++){

    	string s;
        getline(cin, s);

        cout << s.find(' ') + 1 << "\n";
    }

    return 0;
}