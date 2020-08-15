#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char eng, ch;

	for (eng = 'z'; eng >= 'a'; eng--)
	{
		for (ch = 'a'; ch < eng; ch++)
		{
			printf(" ");
		}
		for (ch = eng; ch <= 'z'; ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}