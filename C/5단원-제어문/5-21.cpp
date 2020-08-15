#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;

	printf("정수 n을 입력 : ");
	scanf_s("%d", &n);

	i = 0;
	while (i <= n)
	{
		i++;

		if (i % 2 == 1) //i값이 홀수면
		{
			continue; //20행을 실행하지 않고 12행으로 이동하여 다시 조건식을 수행
		}
		sum += i;
	}

	printf("정수 1에서 %d 이하 짝수들의 합은 %d입니다. \n", n, sum);

	system("pause");
	return 0;
}