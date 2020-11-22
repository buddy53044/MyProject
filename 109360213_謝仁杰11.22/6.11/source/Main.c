#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 14
int main() {


	clock_t begin, end;
	double cost;
	//開始記錄
	begin = clock();
	
	/*待測試程式段*/



	int n[size] = { 9,2,3,1,5,4,8,7,10,6,12,16,87,95 };
	int flag=1;
	int temp;
	int i,j;
	for(i=0; i<size; i++) {
		flag=1;
		for(j=0; j<size-i; j++) {
//		for(j=0;j<size;j++){
			if(n[j]>n[j+1]) {
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
			break;
	}

	for(i=0; i<size; i++) {
		printf("%d ",n[i]);
	}

	//結束記錄
	end = clock();
	cost = (double)(end - begin)/CLOCKS_PER_SEC;
	printf("constant CLOCKS_PER_SEC is: %ld, time cost is: %lf secs", CLOCKS_PER_SEC, cost);

//system("pause");
	return 0;
}
