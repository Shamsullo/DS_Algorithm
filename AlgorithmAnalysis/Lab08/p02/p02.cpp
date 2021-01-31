#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solve(const vector<vector<int>>& t, int r, int c)
{
    if (r == 0 && c == 0)
    {
        return t[r][c];
    }
    if (r == 0)
    {
        return t[r][c] + solve(t, r, c - 1);
    }
    if (c == 0)
    {
        return t[r][c] + solve(t, r - 1, c);
    }
    
    return t[r][c] + max(solve(t, r - 1, c), solve(t, r, c - 1));
}

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
    
    cout << solve(t, nRows - 1, nCols - 1) << "\n";
}