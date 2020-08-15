#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double width, height, avg;

	printf("밑변, 높이: ");
	scanf_s("%lf %lf", &width, &height);

	avg = (width * height) / 2.0;

	printf("밑변 %.2lfcm, 높이: %.2lfcm인 삼각형의 면적=%.2lfcm²\n", width, height, avg);

	system("pause");
	return 0;
}