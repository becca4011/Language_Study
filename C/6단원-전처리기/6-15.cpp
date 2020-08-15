#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define GAP(x, y, z) ((x) < (y) ? ((y) < (z) ? 1 : 0) : 0)
#define ESC 0x1B

int main(void)
{
	int number, a, b;
	char ch;

	printf("ÃÖ¼Ú°ª : ");
	scanf_s("%d", &a);
	printf("ÃÖ´ñ°ª : ");
	scanf_s("%d", &b);

	ch = 0;
	do
	{
		number = rand();

		if (GAP(a, number, b) == 1)
		{
			printf("%d ", number);
		}
		if (_kbhit())
		{
			ch = _getch();
		}
	} while (ch != ESC);
	
	printf("\n");

	system("pause");
	return 0;
}