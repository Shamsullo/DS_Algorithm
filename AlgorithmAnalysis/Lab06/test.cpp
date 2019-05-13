#include <iostream>
#include <vector>
#include <queue>

using namespace std;

enum class Color {white, red, black};
const int none = -1;

bool inRange(int n, int r, int c)
{
	return r >= 0 and r < n and c >= 0 and c < n;
}

int main()
{
	int n; 
	cin >> n;

	vector<vector<char>> maze(n, vector<char>(n, '.'));

	int start = none;
	int dest = none;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> maze[i][j];
			if(maze[i][j] == 'S')
			{
				start = n * i + j;
			}
			else if(maze[i][j] == 'D')
			{
				dest =  n * i + j;
				maze[i][j] = '.';
			}
		}	
	}

	vector<int> dist(n*n, none);
	vector<int> pred(n*n, none);
	vector<Color> state(n*n, Color::white);	

	vector<int> dr = {-1, 1, 0, 0};
	vector<int> dc = {0, 0, -1, 1};

	queue<int> q;
	q.push(start);
	dist[start] = 0;
	state[start] = Color::red;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		state[u] = Color::black;

		int r = u / n;
		int c = u % n;
		for(int i = 0; i < 4; i++)
		{
			int tr = r + dr[i];
			int tc = c + dc[i];

			if(inRange(n, tr, tc) and maze[tr][tc] == '.')
			{
				int index = n * tr + tc;
				if(state[index] == Color::white)
				{
					q.push(index);
					dist[index] = dist[u] + 1;
					state[index] = Color::red;
					pred[index] = u;	
				}
			}
		}
	}
	if(dist[dest] == none)
	{
		cout << "You are safe!" << endl;
	}
	else
	{
		int cur = dest;
		while(cur != start)
		{
			int r = cur / n;
			int c = cur % n;
			maze[r][c] = '*';

			cur =  pred[cur];;
		}

		// for(int i  = 0; i < n; ++i)
		for(auto& r: maze)
		{
			for(auto& ch: r){
				cout << ch; 
			}
			cout << endl;
		}
	}
}