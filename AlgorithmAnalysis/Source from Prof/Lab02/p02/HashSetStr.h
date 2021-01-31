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
        : data(aData), next(aNext)
        {
        }
    };
    
    std::vector<Node*> buckets;
    size_t length;
    HashFunction hashFunc;
    
    void rehash();
    
    public:
    
    HashSetStr()
    : buckets(2, nullptr), length(0), hashFunc(defaultHashFunc)
    {
    }
    
    HashSetStr(HashFunction aHF)
    : buckets(2, nullptr), length(0), hashFunc(aHF)
    {
    }
    
    ~HashSetStr()
    {
        clear();
    }
    
    std::size_t bucketCount() const
    {
        return buckets.size();
    }
    
    HashFunction hf() const
    {
        return hashFunc;
    }
    
    void printDebug() const;
    
    
    bool insert(const std::string& s);
    bool find(const std::string& s);
    bool erase(const std::string& s);
    void clear();
};

#endif