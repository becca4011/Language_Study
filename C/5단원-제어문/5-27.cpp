#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#define ESC 0x1b

int main(void)
{
	char ch, upper;

	do
	{
		printf("���ĺ� �ҹ��ڸ� �Է��Ͻÿ�. : ");
		ch = _getche();

		if (ch >= 'a' && ch <= 'z')
		{
			upper = 'A' + ch - 'a';
			printf("\n��ȯ�� �빮�ڴ� %c�Դϴ�. \n", upper);
		}
		else
		{
			printf("\n");
		}
	} while (ch != ESC);

	system("pause");
	return 0;
}