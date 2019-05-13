 cddddx#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int& top(vector<int>& heap){
	return heap[0];
}

void pop(vector<int>& heap){
	heap.front() = heap.back();
	heap.pop_back();
	int curIndex = 0;
	bool next = true;
	while(next){

		next = false;
		int indexMin = curIndex;
		int child = 2 * curIndex + 1;
		if(child < heap.size() and heap[indexMin] > heap[child]){
			indexMin = child;
		}
		++child;
		if(child < heap.size() and heap[curIndex] > heap[child]){
			indexMin = child;
		}
		if(curIndex != indexMin){
			next = false;
			swap(heap[curIndex], heap[indexMin]);
			curIndex =indexMin; 
		}
	}
}

void push(vector<int>& heap, int x){

	heap.push_back(x);
	int curIndex = heap.size() - 1;

	for(;;){
		if (curIndex == 0) break;

		int parent = (curIndex - 1) / 2;
		if(heap[curIndex] >= heap[parent]) break;	
		
		swap(heap[parent], heap[curIndex]);
		curIndex = parent;
	}
}

int main(){

	vector<int> minHeap;

	int input; 
	while(cin >> input){
		push(minHeap, input);
	}

	while(!minHeap.empty()){
		cout << top(minHeap) << " ";
		pop(minHeap);
	}
}