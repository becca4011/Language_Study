#include <Windows.h>
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i == 1 || i == 9)
			{
				printf("*");
			}
			else if (j == 1 || j == 9)
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

	system("pause");
	return 0;
}