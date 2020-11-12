#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("number\t square\t cube\n");

	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}



	system("pause");
	return 0;
}
