#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, sum, mul;

	printf("정수 n : ");
	scanf_s("%d", &n);

	i = 1; sum = 0; mul = 1;

	do
	{
		sum += i;
		mul *= i;
		i++;
	} while (i <= n); //while에 있는 조건식에 맞지 않으면 do~while문을 끝냄

	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
	printf("1부터 %d까지의 곱은 %d입니다. \n", n, mul);

	system("pause");
	return 0;
}