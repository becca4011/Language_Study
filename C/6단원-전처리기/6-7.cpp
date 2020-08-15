#include <Windows.h>
#include <stdio.h>
#include "6-7.h"

int main(void)
{
	int n;

	printf("입력 : ");
	scanf_s("%d", &n);

	printf("%d의 제곱 = %d, %d의 세제곱 = %d \n", n, SQUARE(n), n, CUBE(n));

	system("pause");
	return 0;
}