// top-down
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int n; cin >> n;
    
    vector<int> t(n + 1);
    t[n] = 1;
    for (int i = n - 1; i > -1; --i)
    {
        int r = 0;
        if (i <= n - 1)
        {
            r += t[i + 1];
        }
        if (i <= n - 2)
        {
            r += t[i + 2];
        }
        if (i <= n - 3)
        {
            r += t[i + 3];
        }
        
        t[i] = r;
    }
    
    cout << t.front() << "\n";
    
    return 0;
}