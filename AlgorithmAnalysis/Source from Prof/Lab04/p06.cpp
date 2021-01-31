#include <iostream>

using namespace std;

void solve(int n, char s, char t, char d)
{
    if (n > 0)
    {
        solve(n - 1, s, d, t);
        cout << s << "->" << d << endl;
        solve(n - 1, t, s, d);
    }
}

int main()
{
    int n; cin >> n;
    solve(n, 's', 't', 'd');
}