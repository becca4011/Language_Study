#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;

	fahrenheit = 72;
	celsius = (5.0 / 9.0) * (fahrenheit - 32);

	printf("ȭ���µ� %lf���� �����µ� %lf���Դϴ�.\n", fahrenheit, celsius);

	system("pause");
	return 0;
}