#include <stdio.h>
#include <stdlib.h>

struct Vec{
    int* a;
    int cp;
    int sz;
};

void init(struct Vec* this){
    this->a = NULL;
    this->cp = 0;
    this->sz = 0;
}

void pushBack(struct Vec* this, int x){
    if(this->cp == this->sz){

        this->cp = this->cp == 0 ? 1 : 2 * this-> cp;
        int* p = malloc(this->cp * sizeof(int));
        
        for (int i = 0; i < this->sz; ++i) {
            p[i] = this->a[i];
        }

        free(this->a);
        this->a = p;
    }
    this->a[this->sz] = x;
    ++this->sz;
}

void printArray(int* beg, int* end){
    while(beg != end){
        printf("%d ", *beg++);
    }
    printf("\n");
}

void reverse(int* beg, int* end){
    if (beg == end) 
        return;

    for (;;){

        if (--end == beg) break;

        int temp = *beg;
        *beg = *end;
        *end = temp;

        if (++beg == end) break;
    }
}
void destroy(struct Vec* this){
    free(this-> a);
    this-> a = NULL;
    this->cp = 0;
    this->sz = 0;
}

int main (void) {
    
    struct Vec v;
    init(&v);

    int input;
    while(scanf("%d", &input) == 1){
        pushBack(&v, input);
    }

    reverse(v.a, v.a + v.sz);
    printArray(v.a, v.a + v.sz);
    destroy(&v);

    return 0;
}