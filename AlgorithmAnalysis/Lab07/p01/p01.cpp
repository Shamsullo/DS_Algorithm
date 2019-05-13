#include <iostream>
#include <vector>

using namespace std;

const int unknown = -1;

struct Edge
{
	int v;
	int w;
	Edge(int aV, int aW){
		v = aV; 
		w = aW;
	}
	
};

int main(){

	int n; cin >> n;
	vector<vector<Edge>> g(n);

	char u;
	char v;
	int w;
	while(cin >> u >> v >> w){
		g[u - 'a'].push_back({v - 'a', w});
		g[v - 'a'].push_back({u - 'a', w});
	}

	vector<bool> t(n, false);
	vector<int> dist(n, unknown);
	vector<int> pred(n, unknown);

	t[0] = true;
	for(auto& e: g[0]){
		dist[e.v] = e.w;
		pred[e.v] = 0;
	}

	for(int i = 1; i < n; ++i){

		int indexMin = unknown; 
		for(int j = 0; j < n; ++j){
			if(!t[j] and dist[j] != unknown){
				if(indexMin == unknown or dist[indexMin] > dist[j]){
					indexMin = j;
				}
			}
		}
		t[indexMin] = true;

		cout << char('a' + pred[indexMin]) << " "
			 << char('a' + indexMin) << " " << dist[indexMin] << endl;

		for(auto& e: g[indexMin]){
			if(!t[e.v] and (indexMin != unknown or dist[e.v] > e.w)){
				dist[e.v] = e.w;
				pred[e.v] = indexMin;
			}
		}
	}


}