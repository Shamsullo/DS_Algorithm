#include <iostream>

using namespace std;

void readAndReverse()
{
    int x;
    if (cin >> x)
    {
        readAndReverse();
        cout << " " << x;
    }
}

int main()
{
    readAndReverse();
}