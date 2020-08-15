#include <stdio.h>

int main(void)
{
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n - 3; i++)
	{
		for (int j = i; j < n - 2; j++)
		{
			if (i == 1)
			{
				if (j == n - 3)
				{
					printf("");
				}
				else
				{
					printf("*");
				}
			}
			else if (j == i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int k = 1; k < i; k++)
		{
			printf("*");
		}

		for (int k = 1; k < i - 1; k++)
		{
			printf("*");
		}
		for (int j = i; j < n - 2; j++)
		{
			if (i == 1)
			{
				printf("*");
			}
			else if (j == n - 3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	for (int i = 1; i <= n - 4; i++)
	{
		for (int j = 1; j <= i + 1; j++)
		{
			if (i == n - 4)
			{
				if (j == i + 1)
				{
					printf("");
				}
				else
				{
					printf("*");
				}
			}
			else if (j == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int k = i; k < n - 4; k++)
		{
			printf("*");
		}

		for (int k = i; k < n - 5; k++)
		{
			printf("*");
		}
		for (int j = 1; j <= i + 1; j++)
		{
			if (i == n - 4)
			{
				printf("*");
			}
			else if (j == i + 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}