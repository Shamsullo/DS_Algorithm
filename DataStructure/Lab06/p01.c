#include <stdio.h>

int main(void)
{
	int x, y;
	int* p;
	p = &x;

	x = 1;

	printf("x = %d\np = %d\n*p = %d\n", x, p, *p);
	*p = 2;
	y = (*p) * (*p);

	printf("y = %d\n", y);	
    return 0;
}