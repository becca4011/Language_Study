#include <Windows.h>
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, repeat, temp, b[SIZE] = { 1, 2, 3, 5, 4 };
	char swap;

	for (repeat = 1; repeat < SIZE; repeat++)
	{
		swap = 'N';
		for (i = 0; i < SIZE - 1; i++)
		{
			if (b[i] > b[i + 1])
			{
				temp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp;

				swap = 'Y';
			}
		}
		if (swap == 'N')
		{
			break;
		}
	}

	printf("���� �� �迭 :");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}