#include <Windows.h>
#include <stdio.h>
#define NUMBER(x) printf("       %6o %6d %6x \n", x, x, x)

int main(void)
{
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);
	printf(">> 결과 : 8진수 10진수 16진수 \n");
	NUMBER(n);

	system("pause");
	return 0;
}