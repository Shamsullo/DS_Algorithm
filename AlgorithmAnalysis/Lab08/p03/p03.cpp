#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int nRows; cin >> nRows;
    int nCols; cin >> nCols;
    
    vector<vector<int>> t(nRows, vector<int>(nCols));
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0;  j < nCols; ++j)
        {
            cin >> t[i][j];
        }
    }
    
    vector<vector<int>> a(nRows, vector<int>(nCols, -1));
    a[0][0] = t[0][0];
    
    for (int i = 1; i < nCols; ++i)
    {
        a[0][i] = t[0][i] + a[0][i - 1];
    }
    for (int i = 1; i < nRows; ++i)
    {
        a[i][0] = t[i][0] + a[i - 1][0];
    }
    for (int i = 1; i < nRows; ++i)
    {
        for (int j = 1; j < nCols; ++j)
        {
            a[i][j] = t[i][j] + max(a[i - 1][j], a[i][j - 1]);
        }
    }
    
    cout << a.back().back() << "\n";
    
    vector<char> path;
    int r = nRows - 1;
    int c = nCols - 1;
    while (r != 0 || c != 0)
    {
        if (r == 0)
        {
            --c;
            path.push_back('R');
        }
        else if (c == 0)
        {
            --r;
            path.push_back('D');
        }
        else if (a[r - 1][c] > a[r][c - 1])
        {
            --r;
            path.push_back('D');
        }
        else
        {
            --c;
            path.push_back('R');
        }
    }
    
    reverse(begin(path), end(path));
    
    for (char e: path)
    {
        cout << e << " ";
    }
    cout << "\n";
}