#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, t;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) { t = a; a = b; b = t; }
	if (a > c) { t = a; a = c; c = t; }
	if (b > c) { t = b; b = c; c = t; }
	printf("%d is largest\n", c);
	printf("%d is smallest", a);

	system("pause");
	return 0;

}
