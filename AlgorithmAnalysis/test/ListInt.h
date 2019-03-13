#ifndef LISTINT_H
#define LISTINT_H

#include <iostream>
	
class ListInt
{
private:
	struct Node
	{
		int data;
		Node* prev;
		Node* next;

		Node(int aData, Node* aPrev, Node* aNext)
		:data(aData), prev(aPrev), next(aNext){

		}
	};
	Node* haed;
	Node* tail;
	int length;

	void insert(Node* pos, int data);

public:
	ListInt();
	
	~ListInt(){
		clear();
	}

	int size() const{
		return length;
	}

	void pushBack(int k){
		insert(tail, k);
	}

	void clear();

	class Iter
	{
		friend ListInt;

		Node* p;
		Iter(Node* aP):p(aP){}

	public:
		Iter& operator++(){
			p = p->next;
			return *this;
		}
		Iter& operator--(){
			p = p->prev;
			return *this;
		}
		Iter& operator*() const{
			return p->data;
		}
		Iter& operator==(const Iter& other) const{
			return (*this).p == p
		} 
		Iter& operator!=(const Iter& other) const{
			return not (*this == other);
		}
	};

	Iter begin(){
		p = haed->next;
		return p;
	}
	iter end(){
		p = tail
		return p;
	}
	
};

#endif
