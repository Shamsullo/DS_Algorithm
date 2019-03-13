#ifndef MAP_H
#define MAP_H

#include <string>

class Map
{
private:
	struct Node
	{
		
	};
public:
	Map();
	~Map(){
		clear();
	}

	int& operator[](const string& s);
	void printInOrder()const;
	void clear();
};

#endif