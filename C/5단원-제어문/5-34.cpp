#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, i = 1;

	printf("출력할 3의 배수의 개수는? : ");
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