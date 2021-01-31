#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int beg = 0, end = 4;
  
    for (;;)
    {
        if (--end == beg) {break;}
        printf("%d", end);
        // int t = beg;
        // beg = end;
        // end = t;
        printf("\n");
        if (++beg == end) {break;}
        printf("%d", beg);
    }
    
    
    return 0;
}