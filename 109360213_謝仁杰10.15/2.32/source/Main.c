#include<stdio.h>
#include<stdlib.h>
int main()
{
	float height, weight;
	float bmi;

	printf("input height(cm) and weight(kg)\n");
	scanf_s("%f %f", &height, &weight);
	
	height = height / 100;
	bmi = weight / (height *height);

	//scanf_s("%f", &bmi);		//test

	printf("%.3f", bmi);

	if (bmi < 18.5)
	{
		printf("Underweight");
	}
	else if (18.5 <= bmi && bmi <= 24.9)
	{
		printf("Normal");
	}
	else if (25 <= bmi && bmi <= 29.9)
	{
		printf("Overweight");
	}
	else if (bmi >= 30)
	{
		printf("Obese");
	}


	system("pause");
	return 0;
}
