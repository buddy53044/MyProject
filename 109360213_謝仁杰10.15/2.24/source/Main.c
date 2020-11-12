#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
	system("pause");
	return 0;

}