#include <iostream>
//#include <vector>
#include <algorithm>

using namespace std;

class VecInt{

    private:
        int* a;
        int sz;
        int cp; 

    public:
        VecInt(){
            a = NULL;
            sz = 0;
            cp = 0;
        }

        VecInt(const VecInt& other);
        VecInt& operator=(const VecInt& other);

        void growIfFull();

        void pushBack(int x);

        int* insert(int* pos, int e);
        int* erase(int* pos);


        int size() const {
            return sz;
        }

        const int& operator[](int index) const{
            return a[index];
        }

        int& operator[](int index){
            return a[index];
        }

        int* begin() const {
            return a;
        }
        int* end() const {
            return a + sz;
        }

        ~VecInt(){
            delete[] a;
        }
    
};

VecInt::VecInt(const VecInt& other){
    sz = other.sz;
    cp = other.sz;

    a = new int[cp];

    for(int i = 0; i < sz; ++i){
        a[i] = other.a[i]; 
    }

}

bool operator==(const VecInt& a, const VecInt& b) {
    if (a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

bool operator!=(const VecInt a, const VecInt b){
    return not (a == b);
}

VecInt& VecInt::operator=(const VecInt& other){
    
    if(this != &other){
        sz = other.sz;
        cp = other.cp;

        int *p = new int[cp];

        for (int i = 0; i < other.sz; ++i) {
            p[i] = other.a[i];
        }

        delete[] a;
        a = p;
    }

    return *this;
}

void VecInt::growIfFull(){
    
    if(sz == cp){
        cp = cp == 0 ? 1: 2 * cp;
        int* p = new int[cp];
       
        for(int i = 0; i < sz; ++i){
            p[i] = a[i];
        }
        delete[] a;
        a = p;
    }
}

void VecInt::pushBack(int x){
    
    growIfFull();
    a[sz] = x;
    ++sz;

}

int* VecInt::insert(int* pos, int e){
    
    int indPos = pos - a;
    growIfFull();

    int* newPos = a + indPos; 
    for (int* i = a + sz; i != newPos; --i){
        *i = *(i - 1);
    }
    *newPos = e;
    ++sz;

    return newPos;
}

int* VecInt::erase(int* pos){

    for (int* i = pos + 1; i != a + sz; ++i)
    {
        *(i - 1) = *i; 
    }

    --sz;
    
    return pos;
}

int main()
{
    VecInt v;
    int x; 
    while(cin >> x){
        v.pushBack(x);
    }  

    auto it = v.begin();
    while(it != v.end()){
        if(*it % 2 == 0){
            it = v.insert(it, 0);
            ++it;
        }     
        ++it;
    }

    for (auto e: v){
        cout << e << " ";
    }
    cout << endl;

    it = v.begin();
    while(it != v.end()){
        if(*it == 0){
            it = v.erase(it);
        }else{
            ++it;
        }
    }

    for (auto e: v){
        cout << e << " ";
    }
    cout << endl;
    
    return 0;
}