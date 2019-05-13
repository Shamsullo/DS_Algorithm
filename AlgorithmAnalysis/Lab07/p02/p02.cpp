#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int unknown = -1;

struct Edge
{
    int v;
    int w;
    Edge(int aV, int aW)
    :v(aV), w(aW)
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
    while(cin >> u >> v >> w  and (u + v + w) != 0)
    {
        g[u - 1].push_back({v - 1, w});
        g[v - 1].push_back({u - 1, w});
    }

    int strat;
    cin >> strat;
    --strat;

    int dest;
    cin >> dest;
    --dest;

    vector<bool> t(n, false);
    vector<int> dist(n, unknown);
    vector<int> pred(n, unknown);

    dist[strat] = 0;

    bool next = true;
    while(next)
    {
        int indexMin = unknown;
        for(int i = 0; i < n; ++i)
        {
            if(!t[i] and dist[i] != unknown)
            {
                if(indexMin == unknown or dist[indexMin] > dist[i])
                {
                    indexMin = i;
                }
            }
        }
        next = indexMin != unknown;
        if(next)
        { 
            t[indexMin] = true;   
            for(auto& e: g[indexMin])
            {
                if(!t[e.v] and 
                (dist[e.v] == unknown or 
                // dist[indexMin] + dist[e.v] > e.w)
                dist[e.v] > dist[indexMin] + e.w))
                {
                    dist[e.v] = dist[indexMin] + e.w;
                    pred[e.v] = indexMin;
                }
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": " << dist[i] << endl;
    }

    cout << "Predecessors:" << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": " << pred[i] + 1 << endl; 
    }

    vector<int> path = {dest};
    while(path.back() != strat)
    {
        path.push_back(pred[path.back()]);
    }

    cout << "Path from " << strat + 1 << " to " << dest + 1 << ":";
    reverse (path.begin(), path.end());

    for(auto& e: path)
    {
        cout << e + 1 << " ";
    }
    cout << endl;
}