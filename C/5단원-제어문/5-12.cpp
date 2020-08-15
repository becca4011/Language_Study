#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n;
	double sum;

	printf("임의의 정수 n을 입력하시오. : ");
	scanf_s("%d", &n);

	sum = 0;
	for (int i = 2; i <= n; i++)
	{
		sum = sum + ((double)(i - 1) / i);
		printf("%d/%d + ", i - 1, i);
	}
	
	printf("\b\b= %.1lf \n", sum);

	system("pause");
	return 0;
}