#include<stdio.h>
#include<stdlib.h>
int main()
{
	float totalMile;		//總里程
	float gasCost;			//汽油錢
	float perMile;			//汽油能跑多遠
	float parking, tolls;	//停車費，過路費
	
	float total;

	printf("請輸入一整天的總里程數\n");
	scanf_s("%f", &totalMile);
	printf("請輸入汽油一公升/加侖多少錢\n");
	scanf_s("%f", &gasCost);
	printf("請輸入平均一公升/加侖能行駛多少公里\n");
	scanf_s("%f", &perMile);
	printf("請輸入一天的停車費\n");
	scanf_s("%f", &parking);
	printf("請輸入一天的通行費(過路費)\n");
	scanf_s("%f", &tolls);

	total = (totalMile / perMile)*gasCost + parking + tolls;
	printf("共%.3f元", total);

	system("pause");
	return 0;
}
