#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int age;

	printf("���̴�? ");
	scanf_s("%d", &age);

	printf("�Է��� ����: %d��\n", age);

	system("pause");
	return 0;
}