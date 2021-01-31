#include <iostream>

using namespace std;

int solve(int m, int n)
{
    if (m == n)
    {
        return 1;
    }
    
    int r = 0;
    if (m <= n - 1)
    {
        r += solve(m + 1, n);
    }
    if (m <= n - 2)
    {
        r += solve(m + 2, n);
    }
    if (m <= n - 3)
    {
        r += solve(m + 3, n);
    }
    
    return r;
}

int main()
{
    int n; cin >> n;
    cout << solve(0, n) << "\n";
    return 0;
}