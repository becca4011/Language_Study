#include <Windows.h>
#include <stdio.h>
#define PI 3.141592
#define R 5

int main(void)
{
	double area;

	#ifdef PI
		printf("PI = 3.141592 \n");
	#endif

	#undef R
	#define R 3

	area = PI * R * R;

	printf("Radius = %d \nAREA = %.2lf \n", R, area);

	system("pause");
	return 0;
}