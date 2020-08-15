#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int a1, a2, a3;

	a1 = 10;
	a2 = 20;
	a3 = a1 + a2;

	printf("a1 = %d, a2 = %d, a3 = %d \n", a1, a2, a3);

	a3 = a2 / 2;

	printf("a1 = %d, a2 = %d, a3 = %d \n", a1, a2, a3);

	system("pause");
	return 0;
}