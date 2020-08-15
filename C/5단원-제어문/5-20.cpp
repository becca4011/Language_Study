#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, sum;

	while (1) //무한루프
	{
		printf("정수 n을 입력(종료 : -1) : ");
		scanf_s("%d", &n);

		if (n == -1) //n에 -1을 입력하면 루프를 탈출하여 25행 실행
		{
			break;
		}

		sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("정수 1에서 %d까지의 합은 %d입니다. \n\n", n, sum);
	}
	printf("프로그램을 끝냅니다. \n");

	system("pause");
	return 0;
}