#include <Windows.h>
#include <stdio.h>
#define NUMBER(x) printf("       %6o %6d %6x \n", x, x, x)

int main(void)
{
	int n;

	printf("���� �Է� : ");
	scanf_s("%d", &n);
	printf(">> ��� : 8���� 10���� 16���� \n");
	NUMBER(n);

	system("pause");
	return 0;
}