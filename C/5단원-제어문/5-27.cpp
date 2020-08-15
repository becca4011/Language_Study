#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#define ESC 0x1b

int main(void)
{
	char ch, upper;

	do
	{
		printf("알파벳 소문자를 입력하시오. : ");
		ch = _getche();

		if (ch >= 'a' && ch <= 'z')
		{
			upper = 'A' + ch - 'a';
			printf("\n변환된 대문자는 %c입니다. \n", upper);
		}
		else
		{
			printf("\n");
		}
	} while (ch != ESC);

	system("pause");
	return 0;
}