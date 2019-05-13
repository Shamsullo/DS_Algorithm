#ifndef	LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

class LinkedList{
	
	private:
	struct Node{
		int data;
		Node* prev;
		Node* next;

		Node (int aData, Node* aPrev, Node* aNext)
		:data(aData), prev(aPrev), next(aNext){	
		}
	};

	Node* head;
	Node* tail;
	int length;

	void insertNode(Node* pos, int x);

	public:
	LinkedList();

	int size() const{
		return length;		
	}

	void pushBack(int x){
		insertNode(tail, x);
	}

	std::string toStr() const;

	class Iter{
		friend LinkedList;

	private:
		Node* p;

		Iter(Node* aP): p(aP){}

	public:
		Iter& operator++(){
			p = p->next;
			return *this;
		}

		Iter& operator--(){
			p =  p->prev;
			return *this;
		}
		int& operator*() const{
			return p->data;
		}
		bool operator==(const Iter& other) const{
			return (*this).p == p;
		}
		bool operator!=(const Iter& other) const{
			return not (*this == other);
		}
	};

	Iter begin(){
		return Iter(head->next);
	}
	Iter end(){
		return Iter(tail);
	}

};

#endif 
