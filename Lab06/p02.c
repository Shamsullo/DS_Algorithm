#include <stdio.h>

void badSwap(int a, int b){
	int temp = a;
	a = b; 
	b = temp;

}

void goodSwap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main(void){

	int x;
	int y;
	scanf("%d%d", &x, &y);

	printf("Before badSwap: x = %d y = %d\n", x, y);

	badSwap(x, y);
	printf("After badSwap: x = %d y = %d\n", x, y);

	printf("Before goodSwap x = %d y = %d\n", x, y);
	goodSwap(&x, &y);
	printf("After goodSwap x = %d y = %d\n", x, y);

}