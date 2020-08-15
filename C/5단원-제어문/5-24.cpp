#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, odd, even, odd_sum = 0, even_sum = 0;

	printf("정수 n을 입력하시오. : ");
	scanf_s("%d", &n);

	odd = 1; even = 2;
	while (odd <= n && even <= n)
	{
		odd_sum += odd;
		even_sum += even;
		odd += 2;
		even += 2;
	}
	printf("정수 1에서 %d 이하 홀수들의 합은 %d이고, 짝수들의 합은 %d입니다. \n", n, odd_sum, even_sum);

	system("pause");
	return 0;
}