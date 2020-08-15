#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n;

	for (int i = 1; i <= 9; i++)
	{
		n = 1;
		for (int j = 1; j <= i; j++)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}