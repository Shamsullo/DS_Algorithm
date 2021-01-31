#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

const int& top(const vector<int>& heap)
{
    return heap[0];
}

void pop(vector<int>& heap)
{
    heap.front() = heap.back();
    heap.pop_back();
    int currIndex = 0;
    bool next = true;
    while (next)
    {
        next = false;
        int minIndex = currIndex;
        int child = 2 * currIndex + 1;
        if (child < int(heap.size()) && heap[minIndex] > heap[child])
        {
            minIndex = child;
        }
        ++child;
        if (child < int(heap.size()) && heap[minIndex] > heap[child])
        {
            minIndex = child;
        }
        if (minIndex != currIndex)
        {
            next = true;
            swap(heap[currIndex], heap[minIndex]);
            currIndex = minIndex;
        }
    }
}

void push(vector<int>& heap, int x)
{
    heap.push_back(x); // amortized O(1)
    int currIndex = int(heap.size()) - 1;
    
    for (;;)
    {
        if (currIndex == 0) break;
        
        int parentIndex = (currIndex - 1) / 2;
        
        if (heap[parentIndex] <= heap[currIndex]) break;
        
        swap(heap[parentIndex], heap[currIndex]);
        currIndex = parentIndex;
    }
}

int main()
{
    vector<int> minHeap;
    int x;
    while (cin >> x)
    {
        push(minHeap, x);               // O(log(n))
    }
    
    while (!minHeap.empty())
    {
        cout << " " << top(minHeap);    // O(1)
        pop(minHeap);                   // O(log(n))
    }
    cout << endl;
}