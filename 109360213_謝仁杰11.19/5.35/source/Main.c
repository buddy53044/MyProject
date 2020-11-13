#include<stdio.h>
#include<stdlib.h>

long long int fibonacci(unsigned int n);

int main()
{
	for (int i = 0; ; i++)
	{
		if (fibonacci(i) < 0)
			break;
		printf("fibonacci(%d)=%d\n", i, fibonacci(i));
	}
	system("pause");
	return 0;
}


long long int fibonacci(unsigned int n)
{
	if (n == 0 || n == 1)
		return n;

	int a = 0;
	int b = 1;
	int temp;

	for (int i = 2; i <= n; i++)
	{
		temp = a;
		a = a + b;
		b = temp;
	}
	return a;
}