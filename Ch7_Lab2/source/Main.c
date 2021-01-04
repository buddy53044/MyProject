#include<stdio.h>
#include<stdlib.h>

struct clientData
{
	int acctNum;
	char lastName[15];
	char firstName[10];
	double balance;
};

int main() {
	FILE *pRead, *pWrite;
	FILE *cfptr;
	int cnt = 0;
	struct clientData client = { 0,"","",0.0};

	pRead = fopen("D:\credit.txt", "r");
	if (NULL == pRead) {
		return 0;
	}
	pWrite = fopen("D:\credit_bin.txt", "wb");

	if (NULL == pWrite) {
		fclose(pRead);
		return 0;
	}
	while (!feof(pRead))
	{
		fscanf(pRead, "%d%s%s%lf", &client.acctNum, client.lastName,
			client.firstName, &client.balance);

		fwrite(&client, sizeof(struct clientData), 1, pWrite);
		printf("%-6d%-16s%-11s%10.2f\n", client.acctNum,
			client.lastName, client.firstName, client.balance);
	}
	fclose(pRead);
	fclose(pWrite);
	printf("�wŪ����r�ɪ�ACSII��ơA����s���G�i�����ɮ�\n\n");
	system("pause");

	printf("\nŪ���G�i�����ɮסA�î榡�ƿ�X�p�U:\n");
	if ((cfptr = fopen("D:\credit_bin.txt", "rb")) == NULL)
	{
		printf("File could not be opened.\n");
	}
	else
	{
		printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "first Name", "Balance");
		
		cnt = fread(&client, sizeof(struct clientData), 1, cfptr);

		while (cnt > 0)
		{
			printf("%-6d%-16s%-11s%10.2f\n", client.acctNum,
				client.lastName, client.firstName, client.balance);
			cnt = fread(&client, sizeof(struct clientData), 1, cfptr);
		}
		fclose(cfptr);
	}
	system("pause");
	return 0;
}