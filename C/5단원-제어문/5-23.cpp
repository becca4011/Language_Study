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
	printf("\n���α׷��� �����մϴ�. \n");
	exit(0);

end:
	printf("\nŰ���带 �������ϴ�.\n");

	system("pause");
	return 0;
}