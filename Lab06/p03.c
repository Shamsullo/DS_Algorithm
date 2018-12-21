#include <stdio.h>
#define N 10
#define M 5

int main(void){

	int x[N];

	for (int i = 0; i < N; ++i)	{
		scanf("%d", &x[i]);
	}

	int sum = 0;
	for (int i = 0; i < N; ++i){
		sum += x[i];
	}
	printf("simple sum: %d\n", sum);

	int pSum = 0;
	for (int* p = x; p != x + N; ++p)
	{
		pSum += *p;
	}
	printf("simple sum: %d\n", pSum);

	return 0;
}