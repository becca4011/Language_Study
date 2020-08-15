#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n;

	for (int i = 1; i <= 9; i++)
	{
		n = 1;
		for (int j = i; j <= 9; j++)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}