#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, cnt;

	printf("양의 정수 n : ");
	scanf_s("%d", &n);

	cnt = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
		}
	}

	if (cnt != 0 || n == 1)
	{
		printf(">> %d는(은) 소수가 아닙니다. \n", n);
	}
	else
	{
		printf(">> %d는(은) 소수입니다. \n", n);
	}

	system("pause");
	return 0;
}