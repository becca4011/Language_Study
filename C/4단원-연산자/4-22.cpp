#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x;

	printf("x�Է� : ");
	scanf_s("%d", &x);

	double f = 2.0 * x * x * x - 3.0 * x * x + 1.0 / x;

	printf(" -> x = %d�� ��\n    f(x) = 2x��- 3x��+ 1 / x = %.1lf \n", x, f);

	system("pause");
	return 0;
}