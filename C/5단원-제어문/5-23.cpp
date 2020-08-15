#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 1; i < 10000; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (_kbhit())goto end;
			printf("*");
		}
		printf("\n");
	}
	printf("\n프로그램을 종료합니다. \n");
	exit(0);

end:
	printf("\n키보드를 눌렀습니다.\n");

	system("pause");
	return 0;
}