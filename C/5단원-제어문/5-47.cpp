#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, n1, n2, sum;

	printf("피보나치 개수 입력 : ");
	scanf_s("%d", &n);

	printf("\n*** 피보나치 수열 ***\n");

	sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			n1 = 0;
			n2 = 1;
			printf("%d, ", i);
		}
		else
		{
			sum = n1 + n2;
			printf("%d, ", sum);
			/* 피보나치 수는 앞의 두 수의 합(n2의 값과 sum값 = 다음 피보나치 수의 n1과 n2의 값) */
			n1 = n2;
			n2 = sum;
		}
	}
	printf("\b\b입니다. \n");
	system("pause");
	return 0;
}