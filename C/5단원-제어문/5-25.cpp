#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int harf = 14; //인의 반감기
	int days, n;
	double amount = 100; //인의 양

	printf("현재 인의 양은 %.1lfmg입니다. \n\n", amount);
	
	printf("며칠째 되는 날의 인의 최소 잔량을 구할까요? ");
	scanf_s("%d", &n);

	days = 0;
	while (1)
	{
		days += harf;
		amount /= 2;
		printf("%2d일까지의 인의 최소 잔량은 %6.1lfmg 이상 \n", days, amount);

		if (days >= n)
		{
			break;
		}
	}
	printf("\n>> 그러므로 %2d일 째에는 최소 %6.1lfmg 이상 남아있습니다. \n", n, amount);

	system("pause");
	return 0;
}