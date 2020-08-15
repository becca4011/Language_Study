#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int height;
	double weight, sth, sum, min;

	printf("키 : ");
	scanf_s("%d", &height);

	printf("체중 : ");
	scanf_s("%lf", &weight);

	sth = (height - 100) * 0.9;
	sum = sth + 5;
	min = sth - 5;

	if (weight <= sum && weight >= min)
	{
		printf("당신은 표준 체중입니다. \n");
	}
	else
	{
		printf("당신은 과체중입니다. \n");
	}

	system("pause");
	return 0;
}