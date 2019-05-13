#ifndef MAP_H
#define MAP_H

#include <string>

class Map
{
private:
	struct Node
	{
		std::pair<std::string, int> data;
		Node* left;
		Node* right;

		constructor....
	};

	struct StakFrame
	{	
		const Node* node;
		int count;
		StakFrame(Node* aNode, int aCount){}
	};

	Node* root;
	int length;

public:
	Map()
	:root(nullptr), length(0){
	}

	~Map(){
		clear();
	}

	int& operator[](const string& s);
	void printInOrder()const;
	void clear();
};

#endif