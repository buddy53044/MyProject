#include<stdio.h>
#include<stdlib.h>
#define size 10
int recursiveMaximum(int*, int,int );
int main()
{
	int n[size] = { 1,3,5,7,11,2,4,6,10 };
	int max = recursiveMaximum(n, 0, 0);
	printf("%d", max);
	system("pause");
	return 0;
}

int recursiveMaximum(int *n, int max,int offset)
{
	if (n[offset] > max)
		max = n[offset];
	offset++;
	if (offset == size)
		return max;
	recursiveMaximum(n, max, offset);
}