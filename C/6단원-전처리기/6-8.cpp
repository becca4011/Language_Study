#include <Windows.h>
#include <stdio.h>
#define MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) //a > b -> a�� c ��, a < b -> b�� c ��

int main(void)
{
	int a, b, c;

	printf("�� ���� �� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf(">> ���� ū �� : %d \n", MAX(a, b, c));

	system("pause");
	return 0;
}