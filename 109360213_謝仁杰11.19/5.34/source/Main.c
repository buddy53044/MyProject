#include <stdio.h>
#include<stdlib.h>

int exponent(int base, int exp);

int main()
{

	printf("%d", exponent(5, 6));

	system("pause");
	return 0;
}

int exponent(int base, int exp)
{
	if (exp == 1)
		return base;
	else
		return base * (exponent(base, exp - 1));
}