#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, result;

	printf("���ڸ� �Է��ϼ���. : ");
	scanf_s("%d", &n);

	result = 1;
	if (n == 0)
	{
		result = 1;
	}
	else
	{
		for (int i = n; i >= 1; i--)
		{
			result *= i;
		}
	}
	printf("%d! = %d \n", n, result);

	system("pause");
	return 0;
}