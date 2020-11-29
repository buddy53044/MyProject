#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int n[11];
	int a, b;
	int sum;
	int i;
	for (i = 0; i < 11; i++)
		n[i] = 0;

	for (i = 0;i<36000; i++)
	{
		a = 1 + (rand() % 6);
		b = 1 + (rand() % 6);
		sum = a + b;
		n[sum - 2]++;
	}

	for (i = 0; i < 11; i++)
	{
		printf("\t%dÂI:\t%d¦¸\n", i + 2, n[i]);
	}

	system("pause");
	return 0;
}