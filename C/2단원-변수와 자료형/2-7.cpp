#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;

	fahrenheit = 72;
	celsius = (5.0 / 9.0) * (fahrenheit - 32);

	printf("È­¾¾¿Âµµ %lfµµ´Â ¼·¾¾¿Âµµ %lfµµÀÔ´Ï´Ù.\n", fahrenheit, celsius);

	system("pause");
	return 0;
}