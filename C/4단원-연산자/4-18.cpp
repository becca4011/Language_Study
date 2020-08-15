#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double rad, height, pi = 3.141592;

	printf("원기둥의 밑면의 반지름, 높이를 입력하세요(cm단위) : ");
	scanf_s("%lf, %lf", &rad, &height);

	double V = pi * rad * rad * height;

	printf(">> 계산한 원기둥의 부피는 %.1lfcm³입니다. \n", V);

	system("pause");
	return 0;
}