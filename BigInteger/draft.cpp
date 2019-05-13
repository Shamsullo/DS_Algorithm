#include <iostream>

using namespace std;

struct Node{
	
	int data;
	Node* prev;
	Node* next;

	Node (int aData, Node* aPrev, Node* aNext)
	:data(aData), prev(aPrev), next(aNext){	
	}

};

void pushBack(Node*& head, Node*& tail, int element);
void printInDirectOrder(Node* head);
void printInReversedOrder(Node* tail);

int main(){

	Node* head;
	Node* tail;

	
	int a; cin >> a;
	
	while(cin >> a){
		pushBack(head, tail, a);
	}

	printInDirectOrder(head);
	printInReversedOrder(tail);

	return 0;
}

void pushBack(Node*& head, Node*& tail, int element){

	if (head == nullptr){
		head = tail = new Node(element, nullptr, nullptr);

	}else{
		tail->next = new Node(element, tail, nullptr);
		tail = tail->next;
	}

}

void printInDirectOrder(Node* head){

	for (Node* p = head; p; p = p->next){
		cout << p->data << " ";
	}
	cout << endl;
}

void printInReversedOrder(Node* tail){

	for(Node* p = tail; p; p = p->prev){
		cout << p->data << " ";
	}
	cout << endl;
}
