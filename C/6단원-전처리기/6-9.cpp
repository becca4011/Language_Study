#include <Windows.h>
#include <stdio.h>
#define SQ(x) ((x)*(x))

int main(void)
{
	int n, result;

	printf("n�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	result = 0;
	printf(">> ");
	for (int i = 1; i <= n; i++)
	{
		result += SQ(i);
		printf("%d��+ ", i);
	}

	printf("\b\b= %d \n", result);

	system("pause");
	return 0;
}