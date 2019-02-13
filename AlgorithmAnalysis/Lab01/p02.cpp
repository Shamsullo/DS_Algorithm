#include <iostream>
#include <list>


using namespace std;

void printInDirectOrder(list<int> lst);
void printInReversedOrder(list<int> lst);

int main(){

	list<int> lst;

	int x;
	while(cin >> x){
		lst.push_back(x);
	}
	printInDirectOrder(lst);
	printInReversedOrder(lst);

	for(auto it = lst.begin(); it != lst.end(); ++it){
		if (*it % 2 == 0){
			lst.insert(it, 0);
		}
	}
	printInDirectOrder(lst);
	printInReversedOrder(lst);

	for(auto it = lst.begin(); it != lst.end(); ++it){
		if (*it % 2 == 0){
			it = lst.erase(it);
			--it;
		}
	}
	printInDirectOrder(lst);
	printInReversedOrder(lst);

	lst.clear();
	printInDirectOrder(lst);
	printInReversedOrder(lst);

	return 0;
}

void printInDirectOrder(list<int> lst){

	for (auto it : lst){
		cout << it << " ";
	}
	cout << endl;
}

void printInReversedOrder(list<int> lst){

	for (auto it = lst.rbegin(); it != lst.rend(); ++it){
		cout << *it << " ";
	}
	cout << endl;
}