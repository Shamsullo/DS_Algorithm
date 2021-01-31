#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solve(
    const vector<vector<int>>& t,
    vector<vector<int>>& a,
    int r, int c)
{
    if (a[r][c] >= 0)
    {
        return a[r][c];
    }
    int res = 0;
    if (r == 0)
    {
        res = t[r][c] + solve(t, a, r, c - 1);
    }
    else if (c == 0)
    {
        res = t[r][c] + solve(t, a, r - 1, c);
    }
    else
    {
        res = t[r][c] + max(solve(t, a, r - 1, c), solve(t, a, r, c - 1));
    }
    
    return a[r][c] = res;
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
    
    vector<vector<int>> a(nRows, vector<int>(nCols, -1));
    a[0][0] = t[0][0];
    
    cout << solve(t, a, nRows - 1, nCols - 1) << "\n";
}