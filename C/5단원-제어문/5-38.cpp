#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, result;

	printf("������ ���� ���� n�� �Է� : ");
	scanf_s("%d", &n);

	result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i;
	}

	printf("1���� %d������ ������ ���� %d�Դϴ�. \n", n, result);

	system("pause");
	return 0;
}