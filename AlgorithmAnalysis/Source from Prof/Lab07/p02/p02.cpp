#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int unknown = -1;

struct Edge
{
	int v;
	int w;
	Edge(int aV, int aW)
	: v(aV), w(aW)
	{
	}
};

int main()
{
	int n; cin >> n;
	vector<vector<Edge>> g(n);
	int u;
	int v;
	int w;
	while (cin >> u >> v >> w && (u + v + w) != 0)
	{
		g[u - 1].emplace_back(v - 1, w);
		g[v - 1].emplace_back(u - 1, w);
	}
	
    int start;
    cin >> start;
    --start;
    
    int dest;
    cin >> dest;
    --dest;
    
    vector<int> t(n, false);
	vector<int> d(n, unknown);
	vector<int> p(n, unknown);
	
    d[start] = 0;
    
    bool next = true;
    while (next)
    {
        int indexMin = -1;
        for (int i = 0; i < n; ++i)
        {
            if (!t[i] && (d[i] != unknown ))
            {
                if (indexMin == -1 || d[indexMin] > d[i])
				{
					indexMin = i;
				}
            }
        }
        
        next = indexMin != -1;
        
        if (next)
        {
            t[indexMin] = true;
            for (const auto& e: g[indexMin])
            {
                if (!t[e.v] && 
                    (d[e.v] == unknown || d[e.v] > d[indexMin] + e.w))
                {
                    d[e.v] = d[indexMin] + e.w;
                    p[e.v] = indexMin;
                }
            }
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": " << d[i] << endl;
    }
    
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": " << p[i] + 1 << endl;
    }

    vector<int> path = {dest};
    while (path.back() != start)
    {
        path.push_back(p[path.back()]);
    }
    
    reverse(begin(path), end(path));
    
    for (const auto& e: path)
    {
        cout << " " << e + 1;
    }
    cout << endl;
}
