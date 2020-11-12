#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number=0;
	float balance,charge,credit,limit;

	//printf("Enter account number(-1 to end):");
	//scanf_s("%d", &number);

	while(1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &number);
		if (number == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		balance = balance + charge - credit;

		if (balance > limit)
		{
			printf("Account:\t%d\nCredit limit:\t%.2f\n", number, limit);
			printf("Balance:\t%.2f\nCredit Limit Exceeded\n\n", balance);
		}
		else
			printf("\n");

	} 


	system("pause");
	return 0;
}