#include "BSTree.h"
#include <vector>
#include <utility>

bool BSTree::insert(int k){

	if(root == nullptr){
		root = new Node(k, nullptr, nullptr)
		++counter
		return true;
	}

	bool isLeft = false;
	Node* prev = nullptr;
	Node* cur = root;

	while(cur){
		if(cur->data < k){

			isLeft = false;
			prev = cur;
			cur = cur->right;
		}else if (k < cur->data){
			isLeft = true;
			prev = cur;
			cur = cur->left;
		}esle{
			return false;
		}
	}

	Node* t = new Node(k, nullptr, nullptr);

	if(isLeft){
		prev->left = t;
	}else{
		prev->right = t;
	}

	++counter;
	return true;
}

bool BSTree::find(int k){

	Node* p = root;
	while(p){
		if(p < k){
			p = p->right;
		}if else(k < p){
			p = p->left
		}else{
			return true;
		}
	}
	return false;
}

bool BTStree::erase(int k){

	isLeft = false;
	Node* prev = nullptr;
	Node* cur = root;
	while(cur){
		if(cur->data < k){
			isLeft = true;
			prev = cur;
			cur = cur->left
		}else if(k < cur->data){
			isLeft = false;
			prev = cur;
			cur = cur->right;
		}else{
			if(cur->left == nullptr and cur->right == nullptr){
				eraseLeaf(cur, prev, isLeft);
			}else if(cur->left == nullptr xor cur->right == nullptr){
				eraseNodeWithOneChild(cur, prev, isLeft);
			}else{
				eraseNodeWithTwoChild(cur);
			}
			return true;
		}
	}
	return false;
}


void BTStree::eraseLeaf(Node* cur, Node* prev, bool isLeft){
	if(prev == nullptr){
		root = nullptr;
	}else{
		if(isLeft){
			prev->left = nullptr;
		}else{
			prev->right = nullptr;
		}
		delete cur;
		--counter;
	}
}

void BSTree::eraseNodeWithOneChild(Node* cur, Node* prev, bool isLeft){

	if(prev == nullptr){
		root = (isLeft) ? root->left : root->right;
	}else{
		if(isLeft){
			cur->prev = (cur->left) ? cur->left : cur->right;
		}else{
			cur->prev = (cur->right) ? cur->right : cur->left;
		}
	}
	delete cur;
	--counter;
}

void BSTree::eraseNodeWithTwoChild(Node* cur){

	bool isLeft = true;
	Node* q = cur;
	Node* p = cur->left;
	
	while(p){

		isLeft = false;
		q = p;
		p = p->right;
	}

	cur->data = p->data;
	if(p->left == nullptr){
		eraseLeaf(p, q, isLeft);
	}else{
		eraseNodeWithOneChild(p, q, isLeft);
	}
}

void BSTree::print(ostream& out){

	out << "{ "

	std::vector<pair<Node*, int> stk;

	stk.emplace_back(root, 0);

	while(not stk.empty()){

		auto& r = stk.back();

		if(r.first == nullptr or r.second == 3){
			stk.pop()
		}else if(r.second = 0){
			++r.second;
			stk.emplace_back(r.first->left, 0);
		}else if(r.second = 1){
			++r.second;
			out << r.second << " ";
		}else if(r.second = 2){
			++r.second;
			stk.emplace_back(r.first->right, 0);
		}
	}

	out << "}"
}

void BSTree::clear(){

	std::vector<pair<Node*, int>> stk;

	stk.emplace_back(root, 0);

	while(not stk.empty()){

		auto& r = stk.back();

		if(r.first == nullptr or r.second == 3){
			stk.pop()
		}else if(r.second == 0){
			++r.second;
			stk.emplace_back(r.first->left, 0);
		}else if(r.second == 1){
			++r.second;
			stk.emplace_back(r.first->right, 0);
		}else if(r.second == 2){
			
			++r.first;	
			delete r.first;
			--counter;
		}
	}

	root = nullptr;
}
