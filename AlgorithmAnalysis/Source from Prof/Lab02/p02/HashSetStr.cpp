#include <cassert>
#include <iomanip>
#include <iostream>

#include "HashSetStr.h"

using namespace std;

size_t defaultHashFunc(const string& s)
{
    size_t hash = 5381;
    
    for (char c: s)
    {
        hash = (hash * 32 + hash) + c;
    }

    return hash;
}

void HashSetStr::printDebug() const
{
    for (size_t i = 0; i < buckets.size(); ++i)
    {
        cout << setw(4) << i << ":";
        for (Node* p = buckets[i]; p; p = p->next)
        {
            cout << " " << p->data; 
        }
        cout << endl;
    }
}

bool HashSetStr::insert(const std::string& s)
{
    if (length == buckets.size())
    {
        rehash();
    }
    
    size_t index = hashFunc(s) % buckets.size();
    
    for (Node* p = buckets[index]; p; p = p->next)
    {
        if (p->data == s)
        {
            return false;
        }
    }
    
    buckets[index] = new Node(s, buckets[index]);
    ++length;
    
    return true;
}

bool HashSetStr::find(const std::string& s)
{
    size_t index = hashFunc(s) % buckets.size();
    
    for (Node* p = buckets[index]; p; p = p->next)
    {
        if (p->data == s)
        {
            return true;
        }
    }
    
    return false;
}

bool HashSetStr::erase(const std::string& s)
{
    size_t index = hashFunc(s) % buckets.size();
    
    Node* q = nullptr;
    for (Node* p = buckets[index]; p; q = p, p = p->next)
    {
        if (p->data == s)
        {
            if (q == nullptr)
            {
                buckets[index] = p->next;
            }
            else
            {
                q->next = p->next;
            }
            delete p;
            --length;
            return true;
        }
    }
    
    return false;
}

void HashSetStr::rehash()
{
    vector<Node*> newBuckets(2 * buckets.size(), nullptr);
    
    for (size_t i = 0; i < buckets.size(); ++i)
    {
        while (buckets[i])
        {
            Node* t = buckets[i];
            buckets[i] = buckets[i]->next;
            size_t index = hashFunc(t->data) % newBuckets.size();
            t->next = newBuckets[index];
            newBuckets[index] = t;
        }
    }
    
    buckets.swap(newBuckets);
}

void HashSetStr::clear()
{
    for (size_t i = 0; i < buckets.size(); ++i)
    {
        while (buckets[i])
        {
            Node* t = buckets[i];
            buckets[i] = buckets[i]->next;
            delete t;
            --length;
        }
    }
    
    assert(length == 0);
}