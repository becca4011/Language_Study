#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int cnt = 0;

	printf("     =============== \n");
	printf("     주사위1 주사위2 \n");
	printf("     =============== \n");

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i + j == 7)
			{
				printf("\t%d \t%d \n", i, j);
				cnt++;
			}
		}
	}

	printf("     =============== \n");
	printf("         총 %d가지 \n", cnt);

	system("pause");
	return 0;
}