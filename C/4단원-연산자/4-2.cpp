#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("정수1 >> ");
	scanf_s("%d", &x);
	printf("정수2 >> ");
	scanf_s("%d", &y);
	printf("\n");

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n\n", x, y, x % y);

	printf("%d / %.1lf = %.1lf \n", x, 3.0, x / 3.0);

	system("pause");
	return 0;
}