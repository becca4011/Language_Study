#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, factorial;

	printf("1���� n������ ���� ���մϴ�. ���� n��? ");
	scanf_s("%d", &n);

	factorial = 1;
	i = 1;

	while (i <= n)
	{
		factorial *= i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�. \n", n, factorial);

	system("pause");
	return 0;
}