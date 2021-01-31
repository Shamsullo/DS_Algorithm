#include <iostream>
#include <vector>

using namespace std;

struct Solver
{
    int counter;
    
    int n;
    vector<int> rows;
    vector<int> cols;
    vector<int> diag1;
    vector<int> diag2;
    
    Solver(int aN)
    : n(aN), rows(n), cols(n), diag1(2 * n - 1), diag2(2 * n - 1), counter(0)
    {
        
    }
    
    void run()
    {
        solve(0);
    }
    
    void solve(int c)
    {
        if (c == n)
        {
            ++counter;
            printSolution();
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (check(i, c))
                {
                    putQueen(i, c);
                    solve(c + 1);
                    takeQueen(i, c);
                }
            }
        }
        
    }
    
    bool check(int r, int c)
    {
        return rows[r] == 0 and diag1[r + c] == 0 and diag2[n - 1 - r + c] == 0;
    }
    
    void putQueen(int r, int c)
    {
        cols[c] = r;
        rows[r] = diag1[r + c] = diag2[n - 1 - r + c] = 1;
    }
    
    void takeQueen(int r, int c)
    {
        rows[r] = diag1[r + c] = diag2[n - 1 - r + c] = 0;
    }
    
    void printSolution()
    {
        cout << counter << ": ";
        for (int e: cols)
        {
            cout << e << " ";
        }
        cout << endl;
    }
    
};

int main()
{
    int n; cin >> n;
    Solver(n).run();
}