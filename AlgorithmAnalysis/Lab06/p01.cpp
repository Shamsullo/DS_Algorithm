#include <iostream>
#include <vector>

using namespace std;

using Graph = vector<vector<int>>;

void dfs(Graph& g, vector<int>& visited, int u){

	visited[u] = 1;
	for (int i = 0; i < g[u].size(); ++i)
	{
		if(not visited[g[u][i]]){
			dfs(g, visited, g[u][i]);
		}
	}
	
}

int main(){

	string line; 
	getline(cin, line);

	int n = stoi(line);

	Graph g(n);

	for (int i = 0; i < n; ++i){
		getline(cin, line);
		
		for(int j = 0; j < n; ++j){
			if(line[j] == '1'){
				g[i].push_back(j);
			}
		}
	}

	vector<int> visited(n, 0);
	int nComponent = 0;

	for (int i = 0; i < n; ++i){
		if(not visited[i]){
			++nComponent;
			dfs(g, visited, i);
		}
	}

	cout << nComponent << endl;
}