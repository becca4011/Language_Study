#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double radius, area, pi = 3.14;

	printf("반지름을 입력하세요. ");
	scanf_s("%lf", &radius);

	area = pi * radius * radius;

	printf("반지름 %.2lf인 원의 면적은 %.2lf입니다. \n", radius, area);

	system("pause");
	return 0;
}