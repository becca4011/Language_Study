#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double area = 100, target = 1;

	for (int i = 1; ; i++)
	{
		area = area / 2;
		printf("%2d�� ������ ���� ���� : %6.2lf \n", i, area);

		if (area < target)
		{
			break;
		}
	}

	system("pause");
	return 0;
}