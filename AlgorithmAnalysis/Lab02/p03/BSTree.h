#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>

#ifdef AUCA_DEBUG
#include <string> 
#endif

class BSTree
{
	struct Node
	{
		int data;
		Node* left;
		Node* right;

		Node(int aData, Node* aLeft, Node* aRight,)
		:data(aData), left(aLeft), right(aRight){			
		}
	};

	Node* root;
	int counter;

	void eraseLeaf(Node* cur, Node* prev, bool isLeft);
	void eraseNodeWithOneChild(Node* cur, Node* prev, bool isLeft);
	void eraseNodeWithTwoChild(Node* cur);

public:

	#ifdef AUCA_DEBUG
	std::string path;
	#endif

	BSTree()
	:root(nullptr), counter(0){
	};

	~BSTree(){
		clear()
	}
	BSTree(const BSTree&) = delete;
	BSTree& operator=(const BSTree&) =  delete;

	int size() const{
		return counter;
	}
	
	bool insert(int k);
	bool find(int k) const;
	bool erase(int k);
	void print(std::ostream& out) const;
	void clear();
};

#endif