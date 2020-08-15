#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y, r, result;

	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	result = 0;
	while (1)
	{
		if (x == 0)
		{
			printf("최대 공약수는 %d입니다. \n", y);
		}
		else if (y == 0)
		{
			printf("최대 공약수는 %d입니다. \n", x);
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
			printf("최대 공약수는 %d입니다. \n", result);
		}
		break;
	}

	system("pause");
	return 0;
}