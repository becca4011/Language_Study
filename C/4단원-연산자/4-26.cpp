#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int year;

	printf("연도를 입력하세요. : ");
	scanf_s("%d", &year);

	printf("%s \n", (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "윤년" : "평년");

	system("pause");
	return 0;
}