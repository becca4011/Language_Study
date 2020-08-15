#include <Windows.h>
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}