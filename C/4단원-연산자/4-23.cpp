#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num;

	printf("네자리 정수를 입력하세요. : ");
	scanf_s("%d", &num);

	int n1 = num / 1000, n2 = num % 1000 / 100, n3 = num % 100 / 10, n4 = num % 10 / 1;

	printf("입력한 수는 %d천%d백%d십%d입니다. \n", n1, n2, n3, n4);

	system("pause");
	return 0;
}