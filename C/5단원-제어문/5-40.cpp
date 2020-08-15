#include <Windows.h>
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			printf("%d * %d = %2d ", j, i, i * j);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}