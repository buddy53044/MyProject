#include<stdio.h>
#include<stdlib.h>

int odd(int u);
int even(int u);
int totalsum(int u);

int main(void)
{
	int n, sum=0;
	char AddChoice;
	printf("1+2+...+n?�п�Jn=");
	scanf_s("%d", &n);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п��:");
	scanf_s(" %c", &AddChoice);

	switch (AddChoice)
	{
	case 'O':
		sum = odd(n);
		break;
	case 'E':
		sum = even(n);
		break;
	case 'I':
		sum = totalsum(n);
		break;
		//default:
		//	printf("��ܿ��~/n");
			//return -1;
	}

	printf("�`�X��%d", sum);
	system("pause");
	return 0;
}

int odd(int u)
{
	int total = 0;
	for (int i = 1; i <= u; i++)
	{
		if (i % 2 == 1)
			total += i;
	}
	return total;
}

int even(int u)
{
	int total = 0;
	for (int i = 1; i <= u; i++)
	{
		if (i % 2 == 0)
			total += i;
	}
	return total;
}

int totalsum(int u)
{
	return odd(u) + even(u);
}