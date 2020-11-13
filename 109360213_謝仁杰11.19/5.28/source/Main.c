#include <stdio.h>
#include<stdlib.h>

int main()
{
	char input;
	printf("¿é¤J­^¤å¦r¥À:");
	scanf_s("%c", &input);

	printf("%c\n", change(input));
}

int change(char x)
{
	if (x >= 'A' && x <= 'Z')
		x += 32;
	else if (x >= 'a' && x <= 'z')
		x -= 32;
	return x;
}