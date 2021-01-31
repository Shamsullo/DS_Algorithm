#include <vector>
#include <utility>

#include "BSTreeInt.h"

using namespace std;

bool BSTreeInt::insert(int k)
{
    #ifdef AUCA_DEBUG
    path.clear();
    #endif
    
    if (root == nullptr)
    {
        root = new Node(k, nullptr, nullptr);
        ++counter;
        return true;
    }
    
    bool isLeft = false;
    Node* prev = nullptr;
    Node* curr = root;
    while (curr)
    {
        if (curr->data < k)
        {
            #ifdef AUCA_DEBUG
            path += "R";
            #endif
            isLeft = false;
            prev = curr;
            curr = curr->right;
        }
        else if (k < curr->data)
        {
            #ifdef AUCA_DEBUG
            path += "L";
            #endif
            isLeft = true;
            prev = curr;
            curr = curr->left;
        }
        else
        {
            return false;
        }
    }
    
    Node* t = new Node(k, nullptr, nullptr);
    
    if (isLeft)
    {
        prev->left = t;
    }
    else
    {
        prev->right = t;
    }
    
    ++counter;
    return true;
}

bool BSTreeInt::find(int k) const
{
    #ifdef AUCA_DEBUG
    path.clear();
    #endif
    
    Node* p = root;
    while (p)
    {
        if (p->data < k)
        {
            #ifdef AUCA_DEBUG
            path += "R";
            #endif
            p = p->right;
        }
        else if (k < p->data)
        {
            #ifdef AUCA_DEBUG
            path += "L";
            #endif
            p = p->left;
        }
        else
        {
            return true;
        }
    }
    
    return false;
}

bool BSTreeInt::erase(int k)
{
    #ifdef AUCA_DEBUG
    path.clear();
    #endif
    
    bool isLeft = false;
    Node* prev = nullptr;
    Node* curr = root;
    while (curr)
    {
        if (curr->data < k)
        {
            #ifdef AUCA_DEBUG
            path += "R";
            #endif
            isLeft = false;
            prev = curr;
            curr = curr->right;
        }
        else if (k < curr->data)
        {
            #ifdef AUCA_DEBUG
            path += "L";
            #endif
            isLeft = true;
            prev = curr;
            curr = curr->left;
        }
        else
        {
            if (curr->left == nullptr and curr->right == nullptr)
            {
                eraseLeaf(curr, prev, isLeft);
            }
            else if (curr->left == nullptr xor curr->right == nullptr)
            {
                eraseNodeWithOneChild(curr, prev, isLeft);
            }
            else
            {
                eraseNodeWithTwoChildren(curr);
            }
            return true;
        }
    }
    
    return false;
}

void BSTreeInt::eraseLeaf(Node* curr, Node* prev, bool isLeft)
{
    if (prev == nullptr)
    {
        root = nullptr;
    }
    else if (isLeft)
    {
        prev->left = nullptr;
    }
    else
    {
        prev->right = nullptr;
    }
    --counter;
    delete curr;
}

void BSTreeInt::eraseNodeWithOneChild(Node* curr, Node* prev, bool isLeft)
{
    if (prev == nullptr)
    {
        root = (isLeft) ? root->left: root->right;
       
    }
    else
    {
        if (isLeft)
        {
            prev->left = (curr->left) ? curr->left: curr->right;
        }
        else
        {
            prev->right = (curr->left) ? curr->left: curr->right;
        }
    }
    --counter;
    delete curr;
}

void BSTreeInt::eraseNodeWithTwoChildren(Node* curr)
{
    bool isLeft = true;
    Node* q = curr;
    Node* p = curr->left;
    while (p->right)
    {
        isLeft = false;
        q = p;
        p = p->right;
    }
    curr->data = p->data;
    if (p->left == nullptr)
    {
        eraseLeaf(p, q, isLeft);
    }
    else
    {
        eraseNodeWithOneChild(p, q, isLeft);
    }
}


void BSTreeInt::print(ostream& out) const
{
    out << "{ ";

    vector<pair<Node*, int>> stk;
    
    stk.emplace_back(root, 0);
    
    while (not stk.empty())
    {
        auto& r = stk.back();
        
        if (r.first == nullptr or r.second == 3)
        {
            stk.pop_back();
        }
        else if (r.second == 0)
        {
            ++r.second;
            stk.emplace_back(r.first->left, 0);
        }
        else if (r.second == 1)
        {
            ++r.second;
            out << r.first->data << " ";
        }
        else if (r.second == 2)
        {
            ++r.second;
            stk.emplace_back(r.first->right, 0);
        }
    }
    
    
    out << "}";
}

void BSTreeInt::clear()
{
    #ifdef AUCA_DEBUG
    path.clear();
    #endif
    
    vector<pair<Node*, int>> stk;
    
    stk.emplace_back(root, 0);
    
    while (not stk.empty())
    {
        auto& r = stk.back();
        
        if (r.first == nullptr or r.second == 3)
        {
            stk.pop_back();
        }
        else if (r.second == 0)
        {
            ++r.second;
            stk.emplace_back(r.first->left, 0);
        }
        else if (r.second == 1)
        {
            ++r.second;
            stk.emplace_back(r.first->right, 0);
        }
        else if (r.second == 2)
        {
            ++r.second;
            #ifdef AUCA_DEBUG
            path += " " + to_string(r.first->data);
            #endif
            delete r.first;
            --counter;
        }
    }
    
    root = nullptr;
}