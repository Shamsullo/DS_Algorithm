#include "ListInt.h"
#include <cassert>

using namespace std;

ListInt::ListInt(){

	head = new Node(0, nullptr, nullptr);
	tail = new Node(0, nullptr, nullptr);
	length = 0;

	head->next = tail->prev;
	tail->prev = head->next;

}

void ListInt::insert(Node* pos, int data){
	Node* temp = new Node(data, pos->prev, pos);
	temp->prev->next = t;
	temp->next->prev = t;
	++length;
}

void ListInt::clear(){

	while(head){
		temp = head->next;
		head = head->next;
		delete temp;
		--length;
	}
	assert(length = 0);
}