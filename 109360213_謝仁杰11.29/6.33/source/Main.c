#include<stdio.h>
#include<stdlib.h>
#define size 10
int binarySearch(int *list, int key, int left, int right);

int main()
{
	int list[size] = { 1,2,4,6,8,10,12,14,16,18 };
	int key;
	puts("input keyValue");
	scanf_s("%d", &key);

	/////////ด๚ธี
	//for (int i = -10; i < 30; i++)
	//{
	//	int subscript = binarySearch(list, i, 0, size - 1);
	//	printf("i=%d subscript=%d value=%d\n",i, subscript,list[subscript]);
	//}
	//////////ด๚ธี

	int subscript = binarySearch(list, key, 0, size - 1);
	printf("%d", subscript);

	system("pause");
	return 0;
}

int binarySearch(int *list, int key, int left, int right)
{
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (key == list[mid])
			return mid;
		if (key > list[mid])
			return binarySearch(list, key, mid + 1, right);
		if (key < list[mid])
			return binarySearch(list, key, left, mid - 1);
	}
	return -1;
}