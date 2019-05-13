#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int white = 0;
const int gray = 1;
const int black = 2;

using Graph = vector<vector<int>>;

void dfs(
    const Graph& g,
    vector<int>& v,
    int u,
    vector<int>& res)
{
    v[u] = gray;
    for (int i = 0; i < g[u].size(); ++i)
    {
        if (v[g[u][i]] == white)
        {
            dfs(g, v, g[u][i], res);
        }
        else if (v[g[u][i]] == gray)
        {
            throw runtime_error("loop!!!");
        }
    }
    res.push_back(u);
    v[u] = black;
}

int main()
{
    string line;
    getline(cin, line);
    int n = stoi(line);
    Graph g(n);

    for (int i = 0; i < n;  ++i)
    {
        getline(cin, line);
        istringstream sinp(line);
        int u;
        while (sinp >> u)
        {
            g[i].push_back(u - 1);
        }
    }
    
    try
    {
        vector<int> v(n, white);
        vector<int> res;
        
        for (int i = 0; i < n; ++i)
        {
            if (!v[i])
            {
                dfs(g, v, i, res);
            }
        }
        
        reverse(res.begin(), res.end());
        
        cout << "res:";
        for (auto v: res)
        {
            cout << " " << v + 1;
        }
        cout << "\n";
    }
    catch (runtime_error& e)
    {
        cout << e.what() << endl;
    }   
}