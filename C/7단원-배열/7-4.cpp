#include <Windows.h>
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, repeat, temp, a[SIZE] = { 5, 4, 3, 2, 1 };

	printf(" 정렬 전 배열 :");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");

	temp = 0;
	for (repeat = 1; repeat < SIZE; repeat++)
	{
		for (i = 0; i < SIZE - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}

	printf("\n\n 정렬 후 배열 :");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}