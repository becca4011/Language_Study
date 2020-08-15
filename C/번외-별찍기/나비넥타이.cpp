#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	printf("\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (int k = i; k < n; k++)
		{
			printf(" ");
		}
		for (int l = i; l < n; l++)
		{
			printf(" ");
		}
		for (int m = 1; m <= i; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			printf("*");
		}
		for (int k = 1; k <= i; k++)
		{
			printf(" ");
		}
		for (int l = 1; l <= i; l++)
		{
			printf(" ");
		}
		for (int m = i; m < n; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}