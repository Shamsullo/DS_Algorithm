#include <iostream>
#include <vector>
#include <stack>

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
        stack<int> stk;
        
        stk.push(-1);
        while (not stk.empty())
        {
            if (stk.size() == n + 1)
            {
                ++counter;
                printSolution();
                stk.pop();
                takeQueen(stk.top(), stk.size() - 1);
                
            }
            else if (stk.top() == n - 1)
            {
                stk.pop();
                if (not stk.empty())
                {
                    takeQueen(stk.top(), stk.size() - 1);
                }
            }
            else
            {
                ++stk.top();
                if (check(stk.top(), stk.size() - 1))
                {
                    putQueen(stk.top(), stk.size() - 1);
                    stk.push(-1);
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