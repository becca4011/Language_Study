#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, sum, mul;

	printf("���� n : ");
	scanf_s("%d", &n);

	i = 1; sum = 0; mul = 1;

	do
	{
		sum += i;
		mul *= i;
		i++;
	} while (i <= n); //while�� �ִ� ���ǽĿ� ���� ������ do~while���� ����

	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
	printf("1���� %d������ ���� %d�Դϴ�. \n", n, mul);

	system("pause");
	return 0;
}