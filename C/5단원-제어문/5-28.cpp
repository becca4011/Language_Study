#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char c1;

	printf("문자 입력 : ");
	scanf_s("%c", &c1);

	if (c1 >= '0' && c1 <= '9')
	{
		printf("숫자입니다. \n");
	}
	else if (c1 >= 'a' && c1 <= 'z')
	{
		printf("알파벳 소문자입니다. \n");
	}
	else if (c1 >= 'A' && c1 <= 'Z')
	{
		printf("알파벳 대문자입니다. \n");
	}
	else
	{
		printf("그 외의 문자입니다. \n");
	}

	system("pause");
	return 0;
}