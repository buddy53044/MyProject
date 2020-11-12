#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	char sign = '*';
	char signs = ' ';

	int r=5;
	for (i = 1; i <= r; i++)
	{
		for (j = 4; j >= i; j--)
		{
			printf("%c", signs);
		}

		for (j = 1; j <= 2 * i -1; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	for (i = r - 1; i > 0; i--)
	{
		for (j = 0; j < r - i; j++)
		{
			printf("%c", signs);
		}

		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("\n");
	
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");
	printf(" *******\n");
	printf("  *****\n");
	printf("   ***\n");
	printf("    *\n");





	system("pause");
	return 0;
}