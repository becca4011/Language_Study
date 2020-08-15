#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int age;

	printf("나이는? ");
	scanf_s("%d", &age);

	printf("입력한 나이: %d세\n", age);

	system("pause");
	return 0;
}