#include <Windows.h>
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 5; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		for (int l = 2; l <= i; l++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 6; i <= 9; i++)
	{
		printf(" ");
		for (int j = 6; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = i; k <= 9; k++)
		{
			printf("*");
		}
		for (int l = i; l <= 8; l++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}