#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

#include "HashSetStr.h"

using namespace std;

size_t defaultHashFunc(const std::string& s){

	size_t hashValue = 0;

	for(int i = 0; i < s.size(); ++i){

		hashValue += 3*(int) s.at(i);
	}

	return hashValue;
}


bool HashSetStr::insert(const std::string& s){

	if(length == buckets.size()){
		rehash();
	}
	
	size_t index = hashFunction(s) % buckets.size();

	for(Node* p = buckets[index]; p; p = p->next){
		if(p->data == s){
			return false;;
		}
	}

	buckets[index] = new Node(s, buckets[index]);
	++length;

	return true;
}

void HashSetStr::rehash(){
	std::vector<Node*> newBuckets(2* buckets.size(), nullptr);

	for(size_t i = 0; i < buckets.size(); ++i){

		while(buckets[i]){
			Node* temp = buckets[i];
			buckets[i] = buckets[i]->next;
			size_t index = hashFunction(temp->data) % newBuckets.size();
			temp->next = newBuckets[index];
			newBuckets[index] = temp;
			
		}
	}

	buckets.swap(newBuckets);
}

bool HashSetStr::find(const std::string& s){

	size_t index = hashFunction(s) % buckets.size();

	for(Node* p = buckets[index]; p; p = p->next){

		if(p->data ==  s){
			return true;
		}
	}

	return false;
}

bool HashSetStr::erase(const std::string& s){
	size_t index = hashFunction(s) % buckets.size();

	Node* q = nullptr;
	for (Node* p = buckets[index]; p; q = p, p = p->next)
	{
		if(p->data == s){
			if(q == nullptr){
				buckets[index] = p->next;
			}else{
				q->next = p->next;
			}
			delete p;
			--length;
			return true;
		}
	}
	return false;
}

void HashSetStr::printDebug() const{

	for(size_t i = 0; i < buckets.size(); ++i){
		cout << setw(3) << i << ":";
		for(Node* p = buckets[i]; p; p = p->next){
			cout << " " << p->data;
		}
		cout << endl;
	}
}


void HashSetStr::clear(){
	for(size_t i = 0; i < buckets.size(); ++i){

		while(buckets[i]){

			Node* temp = buckets[i];
			buckets[i] = buckets[i]->next;
			delete temp;
			--length;
		}
	}
	assert(length == 0);
}

