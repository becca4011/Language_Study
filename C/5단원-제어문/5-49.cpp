#include <Windows.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[4];
	int cnt;
	
	cnt = 0;
	for (int i = 1; i <= 999; i++)
	{
		if (cnt % 11 == 0)
		{
			printf("\n");
		}

		sprintf_s(str, "%d", i);
		if (strchr(str, '3') != NULL || i % 3 == 0) //i�� 3�� ���ԵǾ� �ְų� i�� 3���� ������ ��������
		{
			printf("  P  "); //P�� ���
		}
		else
		{
			printf("%3d  ", i);
		}
		cnt++;
	}
	printf("\n");

	system("pause");
	return 0;
}