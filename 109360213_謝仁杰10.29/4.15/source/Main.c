#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	float amount;
	float principal=5000;
	float rate;
	int year;


	for ( rate = 0.1; rate <= 0.121; rate += 0.005)
	{
		printf("rate=%.1f%%\n", rate * 100);
		for (year = 1; year <= 15; year++)
		{
			amount = principal *( pow(rate+1,year));
		}
		printf("$%f\n\n", amount);
	}


	system("pause");
	return 0;
}
