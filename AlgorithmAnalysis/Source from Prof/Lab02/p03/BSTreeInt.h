#ifndef BSTREEINT_H
#define BSTREEINT_H

#include <iostream>
#ifdef AUCA_DEBUG
#include <string>
#endif

class BSTreeInt
{
    private:

    struct Node
    {
        int data;
        Node* left;
        Node* right;
        Node(int aData, Node* aLeft, Node* aRight)
        : data(aData), left(aLeft), right(aRight)
        {
        }
    };
    
    Node* root;
    int counter;
    
    void eraseLeaf(Node* curr, Node* prev, bool isLeft);
    void eraseNodeWithOneChild(Node* curr, Node* prev, bool isLeft);
    void eraseNodeWithTwoChildren(Node* curr);
    
    public:
    
    #ifdef AUCA_DEBUG
    mutable std::string path;
    #endif
    
    BSTreeInt()
    : root(nullptr), counter(0)
    {
    }

    BSTreeInt(const BSTreeInt&) = delete;
    BSTreeInt& operator=(const BSTreeInt&) = delete;
    
    ~BSTreeInt()
    {
        clear();
    }
    
    int size() const 
    {
        return counter;
    }
    
    void clear();
    bool insert(int k);
    bool find(int k) const;
    bool erase(int k);
    void print(std::ostream& out) const;
};

#endif