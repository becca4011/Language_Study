#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, sum, mul;

	printf("1���� n������ �հ� ���� ���մϴ�. ���� n��? ");
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

	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�. \n", n, mul);

	system("pause");
	return 0;
}