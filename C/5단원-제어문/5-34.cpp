#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, i = 1;

	printf("����� 3�� ����� ������? : ");
	scanf_s("%d", &n);

	while (n > 0)
	{
		printf("%d ", 3 * i);
		i++;
		n--;
	}
	printf("\n");

	system("pause");
	return 0;
}