#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double rad, n1, n2, n3;
	double pi = 3.141592;

	printf("반지름(cm)을 입력하세요. ");
	scanf_s("%lf", &rad);

	n1 = 2 * pi * rad;
	n2 = pi * rad * rad;
	n3 = (4.0 / 3.0) * pi * rad * rad * rad;

	printf("둘레= %7.2lf cm \n", n1);
	printf("면적= %7.2lf cm²\n", n2);
	printf("부피= %7.2lf cm³\n", n3);

	system("pause");
	return 0;
}