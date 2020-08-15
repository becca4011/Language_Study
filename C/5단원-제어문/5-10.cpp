#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int sum;

	for (int i = 1; i <= 10; i++)
	{
		sum = 0;
		for (int j = 1; j <= i; j++)
		{
			sum = sum + j;
		}
		printf("1 ~ %d까지의 합 : %d \n", i, sum);
	}

	system("pause");
	return 0;
}