#include <iostream>
#include <vector>
#include <queue>

using namespace std;

enum class Color {white, red, black};
const int none = -1;

bool inRange(int n, int r, int c)
{
    return 0 <= r && r < n && 0 <= c && c < n;
}

int main()
{
    int n; cin >> n;
    vector<vector<char>> maze(n, vector<char>(n, '.'));
    
    int start = -1;
    int dest = -1;
    
    for (int i = 0; i < n; ++i)
    {
         for (int j = 0; j < n; ++j)
         {
             cin >> maze[i][j];
             if (maze[i][j] == 'S')
             {
                 start = n * i + j;
                 maze[i][j] = 'S';
             }
             if (maze[i][j] == 'D')
             {
                 dest = n * i + j;
                 maze[i][j] = '.';
             }
         }
    }

    vector<int> dist(n * n, none);
    vector<int> pred(n * n, none);
    vector<Color> state(n * n, Color::white);
                    // up, d, l, r
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    state[start] = Color::red;
    while (!q.empty())
    {
        int u = q.front(); 
        q.pop();
        state[u] = Color::black;
        
        int r = u / n;
        int c = u % n;
        for (int i = 0; i < 4; ++i)
        {
            int tr = r + dr[i];
            int tc = c + dc[i];

            if (inRange(n, tr, tc) and maze[tr][tc] == '.')
            {
                int v = n * tr + tc;
                if (state[v] == Color::white)
                {
                    q.push(v);
                    dist[v] = dist[u] + 1;
                    pred[v] = u;
                    state[v] = Color::red;
                }
            }
        }     
    }
    
    if (dist[dest] == none)
    {
        cout << "You are safe" << endl; 
    }
    else
    {
        int curr = dest;
        while (curr != start)
        {
            int r = curr / n;
            int c = curr % n;
            
            maze[r][c] = '*';
            curr = pred[curr];
        }
        for (const auto& r: maze)
        {
            for (const auto& c: r)
            {
                cout << c;
            }
            cout << "\n";
        }
    }
}