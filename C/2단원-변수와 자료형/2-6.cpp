#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double width, height, area;

	width = 3.0;
	height = 5.0;
	area = width * height / 2.0;

	printf("¹Øº¯ %lfcm, ³ôÀÌ %lfcmÀÎ »ï°¢ÇüÀÇ ³ĞÀÌ = %lfcm©÷\n", width, height, area);

	system("pause");
	return 0;
}