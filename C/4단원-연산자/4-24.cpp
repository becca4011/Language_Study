#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�� ���� ���� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf(">> ���� ū �� = %d \n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

	system("pause");
	return 0;
}