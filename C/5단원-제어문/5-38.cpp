#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, result;

	printf("제곱의 합을 구할 n을 입력 : ");
	scanf_s("%d", &n);

	result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i;
	}

	printf("1부터 %d까지의 제곱의 합은 %d입니다. \n", n, result);

	system("pause");
	return 0;
}