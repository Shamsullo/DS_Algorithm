// Accepted

#include <bits/stdc++.h>

using namespace std;

struct Road
{
    int v;
    int w;
    Road(int aV, int aW)
    : v(aV), w(aW)
    {
    }
};

class SpecialHeap
{
    public:
    
    SpecialHeap(int n);
    void change(int v, int w);
    const Road& front() const;
    void popFront();
    
    private:
  
    void pushDown(int index);
    void pushUp(int index);
    
    vector<int> index;
    vector<Road> data;
};

SpecialHeap::SpecialHeap(int n)
: index(n)
{
    index[0] = -1;
    for (int i = 1; i < n; ++i)
    {
        index[i] = i - 1;
        data.emplace_back(i, numeric_limits<int>::max());
    }
}

void SpecialHeap::change(int v, int w)
{
    if (index[v] != -1 and data[index[v]].w > w)
    {
        data[index[v]].w = w;
        pushUp(index[v]);
    }
}

const Road& SpecialHeap::front() const
{
    return data.front();
}

void SpecialHeap::popFront()
{
    swap(data.front(), data.back());
    index[data.front().v] = 0;
    index[data.back().v] = -1;
    data.pop_back();
    pushDown(0);
}


void SpecialHeap::pushDown(int curIndex)
{
    int indexOfMin = curIndex;
    int index1 = 2 * curIndex + 1;
    int index2 = 2 * curIndex + 2;
    if (index1 < int(data.size()) and data[indexOfMin].w > data[index1].w)
    {
        indexOfMin = index1;
    }
    if (index2 < int(data.size()) and data[indexOfMin].w > data[index2].w)
    {
        indexOfMin = index2;
    }
    if (curIndex != indexOfMin)
    {
        swap(index[data[curIndex].v], index[data[indexOfMin].v]);
        swap(data[curIndex], data[indexOfMin]);
        pushDown(indexOfMin);
    }
}

void SpecialHeap::pushUp(int curIndex)
{
    if (curIndex != 0 and data[curIndex / 2].w > data[curIndex].w)
    {
        swap(index[data[curIndex].v], index[data[curIndex / 2].v]);
        swap(data[curIndex], data[curIndex / 2]);
        pushUp(curIndex / 2);
    }
}

typedef vector<vector<Road>> Graph;

int solve(const Graph& g, int totalW)
{
    SpecialHeap heap(g.size());
    
    for (const auto& e: g[0])
    {
        heap.change(e.v, e.w);
    }
    
    for (int i = 1; i < int(g.size()); ++i)
    {
        totalW -= heap.front().w;
        int v = heap.front().v;
        heap.popFront();
        for (const Road& e: g[v])
        {
            heap.change(e.v, e.w);
        }
            
    }
   
    return totalW;
}

int main()
{
    iostream::sync_with_stdio(false);

    int m;
    int n;
    while (cin >> m >> n and m != 0)
    {
        Graph g(m);
        int totalW = 0;
        for (int i = 0; i < n; ++i)
        {
            int u; cin >> u;
            int v; cin >> v;
            int w; cin >> w;
            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
            totalW += w;
        }
        
        
        cout << solve(g, totalW) << endl;
    }
    
    return 0;
}
