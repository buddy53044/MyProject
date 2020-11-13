#include<stdio.h>
#include<stdlib.h>

int lcm(int a, int b);

int main()
{
	int a, b;
	printf("input two intergers,find the least common multiple:");
	scanf_s("%d %d", &a, &b);
	printf("%d", lcm(a, b));
        system("pause");
	return 0;
}


int lcm(int a, int b)
{
	int ans = 1;
	int i = 2;
	if (a == 1 || b == 1)
	{
		ans = a * b;
	}
	else if (a >= i && b >= i)
	{
		while (a >= i && b >= i)
		{
			while (a%i == 0 && b%i == 0)
			{
				ans = ans * i;
				a = a / i;
				b = b / i;
			}
			i++;
		}
	}

	return a * b*ans;
}