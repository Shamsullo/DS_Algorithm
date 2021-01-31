#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

enum class Color {white, red, black};


int main()
{
    map<string, vector<string>> g;
    
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string u; cin >> u;
        string v; cin >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    string start; cin >> start;
    string finish; cin >> finish;
    
    map<string, int> dist;
    map<string, string> pred;
    map<string, Color> state;
    for (const auto& p: g)
    {
        dist[p.first] = -1;
        pred[p.first] = "";
        state[p.first] = Color::white;
    }
    
    queue<string> q;
    q.push(start);
    dist[start] = 0;
    state[start] = Color::red;
    while (!q.empty())
    {
        string u = q.front(); q.pop();
        state[u] = Color::black;
        for (const auto& v: g[u]) 
        {
            if (state[v] == Color::white)
            {
                state[v] = Color::red;
                q.push(v);
                pred[v] = u;
                dist[v] = dist[u] + 1;
            }
        }
    }
    
    for (const auto& p: dist)
    {
        cout << p.first << ": " << p.second << endl;
    }
    
    vector<string> path;
    path.push_back(finish);
    while (!pred[path.back()].empty())
    {
        path.push_back(pred[path.back()]);
    }
    
    reverse(path.begin(), path.end());
    
    for (const auto& v: path)
    {
        cout << " " << v;
    }
    cout << "\n";
}
