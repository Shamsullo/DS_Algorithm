#include "LinkedList.h"
#include <sstream>

using namespace std;

LinkedList::LinkedList(){
	
	head = new Node(0, nullptr, nullptr);
	tail = new Node(0, nullptr, nullptr);
	length = 0;

	head->next = tail;
	tail->prev = head;
}

string LinkedList::toStr() const{

	ostringstream sout;

	bool first =  true;

	sout << "{";

	for(Node* p = head->next; p != tail; p = p->next){
		if(not first){
			sout << ", ";
		}
		sout << p->data;
		first = false;
	}

	sout << "}";

	return sout.str();
}

void LinkedList::insertNode(Node* p, int x){

	Node* temp = new Node(x, p->prev, p);
	temp->next->prev = temp;
	temp->prev->next = temp;

	++length;

}