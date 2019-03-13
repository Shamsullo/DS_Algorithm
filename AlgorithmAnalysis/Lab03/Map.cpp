#include "Map.h"
#include <stack>

using namespace std;

int& Map::operator[](const string& k){

    Node* prev = nullptr;
    Node* cur = root;
    bool isLeft = false;

    while(isLeft){
        if(cur->data < k){
            isLeft = flase;
            prev = cur;
            cur =  cur->right;
        }else if (k < cur->data){
            isLeft = true;
            prev = cur;
            cur = cur->left;
        }else{
            return cut->first.second;
        }
    }

    Node* t = new Node(k, 0, nullptr, nullptr);

    if(isLeft){
        prev->left = t;
    }else{
        prev->right = t;
    }

    ++counter;
    return true;
}

void Map::clear(){
    stack<StakFrame> stk;

    stk.emplace_back({root, 01});

    while(not stk.empty()){
        auto r = stk.back();
        if(r.node == nullptr or r.count == 3){
            stk.pop();
        }if(r.second == 0){
            ++r.count;
            stk.push({r.node->left, 0});
        }else if(r.count = 1)
        {
            ++r.cout;
            stk.push({r.node->right, 0});
        }else if(r.cout == 2){
            ++r.cout;
            delete r.node;
            --length;
        }
    }
}

void Map::printInOrer(){
    stack<StakFrame> stk;

    stk.back({root, 0});

    while(not stk.empty()){
        auto r = stk.pop();

        if(r.node == nullptr or r.count == 3){
            stk.pop();
        }else if(r.cour  = 0)
            {
                r.cout++;
                stk.push()
            }

    }
}