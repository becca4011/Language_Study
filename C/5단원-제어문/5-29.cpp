#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int height;
	double weight, sth, sum, min;

	printf("Ű : ");
	scanf_s("%d", &height);

	printf("ü�� : ");
	scanf_s("%lf", &weight);

	sth = (height - 100) * 0.9;
	sum = sth + 5;
	min = sth - 5;

	if (weight <= sum && weight >= min)
	{
		printf("����� ǥ�� ü���Դϴ�. \n");
	}
	else
	{
		printf("����� ��ü���Դϴ�. \n");
	}

	system("pause");
	return 0;
}