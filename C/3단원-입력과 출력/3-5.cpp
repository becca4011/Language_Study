#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int age;
	char gender;
	double height;

	printf("������? (���ڶ�� M, ���ڶ�� F) ");
	scanf_s("%c", &gender);

	printf("���̴�? ");
	scanf_s("%d", &age);

	printf("Ű��? ");
	scanf_s("%lf", &height);

	printf("\n=====================\n");
	printf("����: %c \n����: %d�� \nŰ: %.1lf \n", gender, age, height);

	system("pause");
	return 0;
}