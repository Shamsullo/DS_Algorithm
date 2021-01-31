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
	char u;
	char v;
	int w;
	while (cin >> u >> v >> w)
	{
		g[u - 'a'].emplace_back(v - 'a', w);
		g[v - 'a'].emplace_back(u - 'a', w);
	}
	
	vector<int> t(n, false);
	vector<int> d(n, unknown);
	vector<int> p(n, unknown);
	
	t[0] = true;
	for (const auto& e: g[0])
	{
		d[e.v] = e.w;
		p[e.v] = 0;
	}
	
	for (int i = 1; i < n; ++i)
	{
		int indexMin = -1;
		for (int j = 0; j < n; ++j)
		{
			if (!t[j] && d[j] != unknown)
			{
				if (indexMin == -1 || d[indexMin] > d[j])
				{
					indexMin = j;
				}
			}
		}
		
		t[indexMin] = true;
		
		cout << char('a' + p[indexMin]) << " "
		     << char('a' + indexMin) << " "
		     << d[indexMin] << "\n";
		
		for (const auto& e: g[indexMin])
		{
			if (!t[e.v] && (d[e.v] == unknown || d[e.v] > e.w))
			{
				d[e.v] = e.w;
				p[e.v] = indexMin;
			}
		}
	}
}
