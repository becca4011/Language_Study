#include <Windows.h>
#include <stdio.h>

int main(void)
{
	printf("%c \n", 'a');
	printf("%c \n", 97);
	printf("%c \n", '\141');
	printf("%c \n", '\x61');

	printf("���� : %c \n", '\a');
	printf("���� �ο��ȣ : %c \n", '\'');
	printf("abcdef\b\b\b\b");
	printf("%s \n", "ghijk");

	system("pause");
	return 0;
}