#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

#include "HashSetStr.h"

using namespace std;

size_t hashFunc(const string& s);

size_t badHF(const string& s)
{
    return 42;
}

int main()
{
    
    HashSetStr names(badHF);

    HashSetStr::HashFunction hashFunc = names.hf();
    
    string line;
    while (getline(cin, line))
    {
        istringstream sinp(line);
        
        string cmd; sinp >> cmd;
        if (cmd == "#")
        {
            names.printDebug();
        }
        else if (cmd == "+")
        {
            string name; sinp >> name;
            cout << "hash: " << hashFunc(name) << endl;
            cout << "hash % size: " << hashFunc(name) % names.bucketCount() << endl;
            cout << (names.insert(name) ? "OK": "already exists") << endl;
        }
        else if (cmd == "-")
        {
            string name; sinp >> name;
            cout << "hash: " << hashFunc(name) << endl;
            cout << "hash % size: " << hashFunc(name) % names.bucketCount() << endl;
            cout << (names.erase(name) ? "OK": "does not exist") << endl;
        }
        else if (cmd == "?")
        {
            string name; sinp >> name;
            cout << "hash: " << hashFunc(name) << endl;
            cout << "hash % size: " << hashFunc(name) % names.bucketCount() << endl;
            cout << (names.find(name) ? "Found": "Not found") << endl;
        }
    }
    
    return 0;
}