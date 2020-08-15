#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력 : ");
	scanf_s("%c", &ch);

	printf("%2d", ch & (1 << 7) ? 1 : 0);
	printf("%2d", ch & (1 << 6) ? 1 : 0);
	printf("%2d", ch & (1 << 5) ? 1 : 0);
	printf("%2d", ch & (1 << 4) ? 1 : 0);
	printf("%2d", ch & (1 << 3) ? 1 : 0);
	printf("%2d", ch & (1 << 2) ? 1 : 0);
	printf("%2d", ch & (1 << 1) ? 1 : 0);
	printf("%2d \n", ch & (1) ? 1 : 0);

	system("pause");
	return 0;
}