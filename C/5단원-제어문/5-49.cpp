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
		if (strchr(str, '3') != NULL || i % 3 == 0) //i에 3이 포함되어 있거나 i가 3으로 나누어 떨어지면
		{
			printf("  P  "); //P를 출력
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