#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num;

	printf("����� ���ϴ� ����? ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d \n", num, i, num * i);
	}

	system("pause");
	return 0;
}