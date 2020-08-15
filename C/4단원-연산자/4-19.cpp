#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int month;

	printf("월(1~12) 입력 : ");
	scanf_s("%d", &month);

	printf(">> %d월은 %s입니다. \n", month, (month > 6) ? "하반기" : "상반기");

	system("pause");
	return 0;
}