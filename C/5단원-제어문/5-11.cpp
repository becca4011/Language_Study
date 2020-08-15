#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, sum, mul;

	printf("1부터 n까지의 합과 곱을 구합니다. 정수 n은? ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		mul = 1;
		for (int j = 1; j <= i; j++)
		{
			sum += j;
			mul *= j;
		}
	}

	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다. \n", n, mul);

	system("pause");
	return 0;
}