#include <stdio.h>
#include <stdlib.h>

void printArray(int *beg, int* end){

    while(beg != end){
        printf("%d ", *beg++);
    }
    printf("\n");
}

void reverse(int* beg, int* end){
    if(beg == end){
        return;
    }
    for(;;){

        if(--end == beg) break;

        int temp =  *beg;
        *beg = *end;
        *end = temp;

        if (++beg == end) break;
    }
}

int main(void){
  
    printf("Number of elements: ");
    int x; scanf("%d", &x);

    int* p = malloc(x * sizeof(int));

    for (int i = 0; i < x; ++i){
        scanf("%d", p + i);
    } 

    printArray(p, p + x);

    reverse(p, p + x);

    printArray(p, p + x);

    free(p);

    return 0;
}