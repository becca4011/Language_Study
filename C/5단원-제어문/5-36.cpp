#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, max, cnt;

	printf("최대 몇까지의 소수를 출력? ");
	scanf_s("%d", &max);

	n = 2;
	while (n < max)
	{
		cnt = 0;
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				cnt++;
			}
		}
		if (cnt == 0)
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");

	system("pause");
	return 0;
}