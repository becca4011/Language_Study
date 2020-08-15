#include <Windows.h>
#include <stdio.h>
#define MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) //a > b -> a와 c 비교, a < b -> b와 c 비교

int main(void)
{
	int a, b, c;

	printf("세 개의 수 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf(">> 가장 큰 수 : %d \n", MAX(a, b, c));

	system("pause");
	return 0;
}