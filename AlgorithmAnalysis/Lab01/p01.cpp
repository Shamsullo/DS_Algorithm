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
void insertBefore(Node*& head, Node*& current, int element);
Node* erase(Node*& head, Node*& tail, Node* current);
void clear(Node*& head, Node*& tail);

int main(){

	Node* head = nullptr;
	Node* tail =  nullptr;

	
	int a; 
	while(cin >> a){
		pushBack(head, tail, a);
	}

	printInDirectOrder(head);
	printInReversedOrder(tail);

	for (Node* p = head; p; p = p->next){
		if (p->data % 2 == 0){
			insertBefore(head, p, 0);
		}
	}

	printInDirectOrder(head);
	printInReversedOrder(tail);

	for (Node* p = head; p; p = p->next){
		if (p->data % 2 == 0){
			erase(head, tail, p);
		}
	}

	printInDirectOrder(head);
	printInReversedOrder(tail);

	clear(head, tail);
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

void insertBefore(Node*& head, Node*& current, int element){

	if (head == current){

		head->prev = new Node(element, nullptr, current);
		head = head->prev;

	}else{
	
		Node* temp = new Node(element, current->prev, current);
		current->prev->next = temp;
		current->prev = temp;

	}
}

Node* erase(Node*& head, Node*& tail, Node* current){

	if (head == current){

		head = current->next;
		head->prev = nullptr;
		delete current;
		return head;

	}else if(current == head and current == tail){

		delete current;
		head = tail = nullptr;
		return head;

	}else if(current == tail){

		tail = current->prev;
		tail->next = nullptr;
		delete current;
		return tail;

	}else{

		current->prev->next = current->next;
		current->next->prev = current->prev;
		Node* temp = current->next;
		delete current;
		return temp;

	}
}

void clear(Node*& head, Node*& tail){

	while(head){

		cout << "Deleted Node: " << head->data << endl;

		Node* temp = head->next;
		delete head;
		head = temp;
	}

	head = tail = nullptr;
}
