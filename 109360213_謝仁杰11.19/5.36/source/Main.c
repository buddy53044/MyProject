#include <stdio.h>
#include<stdlib.h>

void hanoi(int n, char A, char B, char C);

int main() {
	int n;
	printf("½Ð¿é¤J½L¼Æ¡G");
//	scanf_s("%d", &n);
 	n=2;
	hanoi(n, 'A', 'B', 'C');

	system("pause");
   	return 0;
}

void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("Move sheet from %c to %c\n", A, C);
	} else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}
