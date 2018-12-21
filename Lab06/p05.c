#include <stdio.h>
#include <stdlib.h>

int* createDynArray(int len, int initValue){
	int* res = malloc(len * sizeof(int));

	for (int i = 0; i < len; ++i)
	{
		res[i] = initValue;
	}
	return res;
}

int main(void){

	int n;
	scanf("%d", &n);

	int initValue;
	scanf("%d", &initValue);

	int* a =  createDynArray(n, initValue);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	free(a);

	return 0;
}