#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, cnt, sum;

	sum = 0;
	cnt = 1;

	for (int i = 1; cnt <= 5; i++)
	{
		printf("\n양의 정수 n을 입력하세요. ");
		scanf_s("%d", &n);

		if (n <= 0)
		{
			continue;
		}

		cnt++;
		printf("지금까지의 합 %2d + %2d = ", sum, n);
		
		sum += n;
		printf("%2d \n", sum);
	}

	system("pause");
	return 0;
}