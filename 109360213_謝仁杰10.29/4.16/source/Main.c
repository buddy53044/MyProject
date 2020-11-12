#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,space;
	char sign = '*';
	char signs = ' ';
	
	printf("(A)\n");
	for (i = 0; i < 10; i++) 
	{
		for (j = 0; j <=i; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("(B)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}


	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{

		for (space = 0; space < i; space++)
		{
			printf("%c", signs);
		}
		for (j = 10; j > i; j--) 
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 0; i < 10; i++) 
	{
		for (space = 9; space > i; space--)
		{
			printf("%c", signs);
		}
		for (j = 0; j <= i; j++) 
		{
			printf("%c", sign);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}