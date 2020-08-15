#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, factorial;

	printf("1부터 n까지의 곱을 구합니다. 정수 n은? ");
	scanf_s("%d", &n);

	factorial = 1;
	i = 1;

	while (i <= n)
	{
		factorial *= i;
		i++;
	}

	printf("1부터 %d까지의 곱은 %d입니다. \n", n, factorial);

	system("pause");
	return 0;
}