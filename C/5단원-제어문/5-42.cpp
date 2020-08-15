#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n", a, b);

	for (int i = 1; i <= 100; i++)
	{
		if (i % a == 0 && i % b != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	system("pause");
	return 0;
}