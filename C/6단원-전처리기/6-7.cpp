#include <Windows.h>
#include <stdio.h>
#include "6-7.h"

int main(void)
{
	int n;

	printf("�Է� : ");
	scanf_s("%d", &n);

	printf("%d�� ���� = %d, %d�� ������ = %d \n", n, SQUARE(n), n, CUBE(n));

	system("pause");
	return 0;
}