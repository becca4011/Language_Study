#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int cnt = 0;

	printf("     =============== \n");
	printf("     �ֻ���1 �ֻ���2 \n");
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
	printf("         �� %d���� \n", cnt);

	system("pause");
	return 0;
}