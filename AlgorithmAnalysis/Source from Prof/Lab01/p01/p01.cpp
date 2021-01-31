#include <iostream>

struct Node
{
    int data;
    Node* prev;
    Node* next;
    
    Node(int aData, Node* aPrev, Node* aNext)
    : data(aData), prev(aPrev), next(aNext)
    {
    }
};

using namespace std;

void pushBack(Node*& head, Node*& tail, int e);
void printInDirectOrder(Node* head);
void printInReversedOrder(Node* tail);
void insert(Node*& head, Node* p, int e);
Node* erase(Node*& head, Node*& tail, Node* p);
void clear(Node*& head, Node*& tail);
  
int main()
{
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int x;
    while (cin >> x)
    {
        pushBack(head, tail, x);
    }
    
    printInDirectOrder(head);
    printInReversedOrder(tail);
    
    for (Node* p = head; p; p = p->next)
    {
        if (p->data % 2 == 0)
        {
            insert(head, p, 0);
        }
    }
    
    printInDirectOrder(head);
    printInReversedOrder(tail);
    
    for (Node* p = head; p;)
    {
        if (p->data % 2 == 0)
        {
            p = erase(head, tail, p);
        }
        else
        {
            p = p->next;
        }
    }
    
    printInDirectOrder(head);
    printInReversedOrder(tail);
    
    
    clear(head, tail);
    
    return 0;
}

void pushBack(Node*& head, Node*& tail, int e)
{
    if (head == nullptr)
    {
        head = tail = new Node(e, nullptr, nullptr);
    }
    else
    {
        tail->next = new Node(e, tail, nullptr);
        tail = tail->next;
    }
}


void printInDirectOrder(Node* head)
{
    for (Node* p = head; p; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

void printInReversedOrder(Node* tail)
{
    for (Node* p = tail; p; p = p->prev)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

void insert(Node*& head, Node* p, int e)
{
    if (p != head)
    {
        Node* t = new Node(e, p->prev, p);
        t->next->prev = t;
        t->prev->next = t;
    }
    else
    {
        head->prev = new Node(e, nullptr, head);
        head = head->prev;
    }
    
}

Node* erase(Node*& head, Node*& tail, Node* p)
{
    if (p == head && head == tail)
    {
        delete p;
        head = tail = nullptr;
        return nullptr;
    }
    else if (p == head)
    {
        head = p->next;
        head->prev = nullptr;
        delete p;
        return head;
    }
    else if (p == tail)
    {
        tail = tail->prev;
        tail->next = nullptr;
        delete p;
        return nullptr;
    }
    else
    {
        p->prev->next = p->next;
        p->next->prev = p->prev;
        Node* t = p->next;
        delete p;   
        return t;
    }
}


void clear(Node*& head, Node*& tail)
{
    while (head)
    {
        cout << "Delete node: " << head->data << endl;
        
        Node* tmp = head->next;
        delete head;
        head = tmp;
    }
    
    head = tail = nullptr;
}