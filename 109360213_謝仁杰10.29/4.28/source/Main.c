#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code,hour,item;
	float rate; 
	float manager;
	float pay;
	double total = 0;

	while (1)
	{
		printf("Enter employee's number code(-1 to end):");
		scanf_s("%d", &code);
		if (code == -1)
		{
			printf("total pay for this week is %.2lf", total);
			break;
		}

		switch (code)
		{
			case  1:
				printf("Enter the manager's weekly salary:");
				scanf_s("%f", &manager);
				pay = manager;
				printf("weekly pay $%.2f\n\n", pay);
				total += pay;
			break;

			case 2:
				printf("Enter the hourly worker's rate:");
				scanf_s("%f", &rate);
				printf("Enter the number of hours worked:");
				scanf_s("%d", &hour);
				if (hour <= 40)
				{
					pay = hour * rate;
					printf("weekly pay $%.2f\n\n", hour*rate);
					total += pay;
				}
				else
				{
					pay = 40 * rate + (hour - 40)*1.5*rate;
					printf("weekly pay $%.2f\n\n", pay);
					total += pay;
				}
				break;

			case 3:
				printf("Enter the commission worker's gross sales:");
				scanf_s("%f", &rate);
				pay = 250 + rate * 0.057;
				printf("weekly pay $%.2f\n\n", pay);
				total += pay;
			break;

			case 4:
				printf("Enter the pieceworker's rate:");
				scanf_s("%f", &rate);
				printf("Enter the number of item completed:");
				scanf_s("%d", &item);
				pay = item * rate;
				printf("weekly pay $%.2f\n\n", pay);
				total += pay;

			break;

			default:
				printf("invaild code \n\n");
			break;
		}
	}
	system("pause");
	return 0;
}