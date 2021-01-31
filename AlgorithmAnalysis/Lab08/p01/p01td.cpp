// top-down
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int>& t, int m, int n)
{
    if (t[m] != 0)
    {
        return t[m];
    }
    
    int r = 0;
    if (m <= n - 1)
    {
        r += solve(t, m + 1, n);
    }
    if (m <= n - 2)
    {
        r += solve(t, m + 2, n);
    }
    if (m <= n - 3)
    {
        r += solve(t, m + 3, n);
    }
    
    return t[m] = r;
}

int main()
{
    
    int n; cin >> n;
    
    vector<int> t(n + 1);
    t[n] = 1;
    cout << solve(t, 0, n) << "\n";
    
    return 0;
}