#ifndef HASHSETSTR_H
#define HASHSETSTR_H

#include <string>
#include <vector>

size_t defaultHashFunc(const std::string& s);

class HashSetStr
{

public:
	typedef size_t (*HashFunction)(const std::string&);
		
private:
	struct Node
	{
		std::string data;
		Node* next;

		Node(const std::string& aData, Node* aNext)
		:data(aData), next(aNext){

		}
		
	};

	std::vector<Node*> buckets;
	size_t length;
	HashFunction hashFunction;

	void rehash();

public:

	HashSetStr()
	:buckets(2, nullptr), length(0), hashFunction(defaultHashFunc){
	}

	HashSetStr(HashFunction aHF)
	:buckets(2, nullptr), length(0), hashFunction(aHF){	
	}

	~HashSetStr(){
		clear();
	};

	size_t bucketsCount() const{
		return buckets.size();
	}

	HashFunction hf() const {
		return hashFunction;
	}

	bool insert(const std::string& s);
	bool find(const std::string& s);
	bool erase(const std::string& s);
	void printDebug() const;
	void clear();

};

#endif