#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

struct Edge
{
    int u;
    int v;
    int w;
    Edge(int aU, int aV, int aW)
    : u(aU), v(aV), w(aW)
    {
    }
};

int main()
{
    int nEdges; cin >> nEdges;
    vector<Edge> edges;
    edges.reserve(nEdges);
    
    set<char> s;
    char ch;
    for (int i = 0; i < nEdges; ++i) {
        cin >> ch;
        int u = ch - 'A';
        s.insert(ch);
        
        cin >> ch;
        int v = ch - 'A';
        s.insert(ch);
        
        int w; 
        cin >> w;
        edges.emplace_back(u, v, w);
    }
    cin >> ch;
    int start = ch - 'A';
    
    int nVertices = s.size();
    
    cout << "   ";
    for (int i = 0; i < nVertices; ++i)
    {
        cout << setw(4) << char(i + 'A');
    }
    cout << "\n" << string(nVertices * 4 + 3, '-') << "\n"; 

    vector<int> d(nVertices);
    vector<char> p(nVertices, 'n');
    vector<int> t(nVertices, false);
    
    t[start] = true;
    d[start] = 0;
    for (int i = 1; i < nVertices; ++i)
    {
        for (const auto& e: edges)
        {
            if (t[e.u] && !t[e.v])
            {
                d[e.v] = d[e.u] + e.w;
                p[e.v] = e.u + 'A';
                t[e.v] = true;
            }
            else if (t[e.u] && t[e.v] && d[e.v] > d[e.u] + e.w)
            {
                d[e.v] = d[e.u] + e.w;
                p[e.v] = e.u + 'A';
                t[e.v] = true;
            }
        }
        
        cout << "d: ";
        for (int i = 0; i < nVertices; ++i)
        {
            if (t[i])
            {
                cout << setw(4) << d[i];
            }
            else
            {
                cout << setw(4) << "inf";
            }
        }
        
        cout << "\np: ";
        for (int i = 0; i < nVertices; ++i)
        {
            cout << setw(4) << (t[i] ? p[i]: 'n');
        }
        cout << "\n";
    }
    
    bool hasLoop = false;
    for (const auto& e: edges)
    {
        if (t[e.u] && !t[e.v])
        {
            hasLoop = true;
            break;
        }
        else if (t[e.u] && t[e.v] && d[e.v] > d[e.u] + e.w)
        {
            hasLoop = true;
            break;
        }
    }
    
    if (hasLoop)
    {
        cout << "negative loop!\n";
    }
    else
    {
        for (int dest = 0; dest < nVertices; ++dest)
        {
            if (t[dest])
            {
                vector<char> path = {char(dest + 'A')};
                while (path.back() != start + 'A')
                {
                    path.push_back(p[path.back()- 'A'] );
                }
                
                reverse(begin(path), end(path));
                
                cout << char(dest + 'A') << ":";
                for (char e: path)
                {
                    cout << " " << e;
                }
                cout << "\n";
            }
        }
    }
    
}
