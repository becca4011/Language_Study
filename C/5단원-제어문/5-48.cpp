#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y, r, result;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	result = 0;
	while (1)
	{
		if (x == 0)
		{
			printf("�ִ� ������� %d�Դϴ�. \n", y);
		}
		else if (y == 0)
		{
			printf("�ִ� ������� %d�Դϴ�. \n", x);
		}
		else if (x > y ? x : y)
		{
			for (r = 2; r < (x > y ? x : y); r++)
			{
				if (x % r == 0 && y % r == 0)
				{
					result = r;
				}
			}
			printf("�ִ� ������� %d�Դϴ�. \n", result);
		}
		break;
	}

	system("pause");
	return 0;
}