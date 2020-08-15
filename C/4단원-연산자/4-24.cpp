#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("세 개의 정수 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf(">> 가장 큰 수 = %d \n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

	system("pause");
	return 0;
}