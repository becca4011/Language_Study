#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int year;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &year);

	printf("%s \n", (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "����" : "���");

	system("pause");
	return 0;
}