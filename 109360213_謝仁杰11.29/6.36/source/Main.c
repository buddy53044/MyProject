#include<stdio.h>
#include<stdlib.h>
void reverse(char* , int, int );
int main()
{
	//char s[] = { "helloworld" };
	char s[80];
	puts("input string then the funtion will reverse that");
	gets(s);
	reverse(s, 0, strlen(s)-1);
	printf("%s", s);
	system("pause");
	return 0;
}

void reverse(char *s, int first, int last)
{
	char temp;
	if (first > last)
		return;
	temp = s[first];
	s[first] = s[last];
	s[last] = temp;
	reverse(s, first+1, last-1);

}
