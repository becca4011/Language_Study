#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double area = 100, target = 1;

	for (int i = 1; ; i++)
	{
		area = area / 2;
		printf("%2d번 접었을 때의 넓이 : %6.2lf \n", i, area);

		if (area < target)
		{
			break;
		}
	}

	system("pause");
	return 0;
}