#include <Windows.h>
#include <stdio.h>
#define N 5

int main(void)
{
	int f[N] = { 3, 0, -30, -20, -1 };
	int i, min;

	min = f[0];
	for (i = 0; i < N; i++)
	{
		if (min > f[i])
		{
			min = f[i];
		}
	}

	printf("��� �� ��� :");
	for (i = 0; i < N; i++)
	{
		printf("%4d", f[i]);
	}
	printf("\n���� ���� ��� �� : %d \n", min);

	system("pause");
	return 0;
}