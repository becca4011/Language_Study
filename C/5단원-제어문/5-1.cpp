#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int temp;

	printf("현재 온도는? ");
	scanf_s("%d", &temp);

	if (temp < 0)
	{
		printf("오늘은 영하이며 ");
	}

	printf("현재 온도는 %d도입니다. \n", temp);

	system("pause");
	return 0;
}