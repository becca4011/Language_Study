#include <Windows.h>
#include <stdio.h>
#define PI 3.141592
#define VOLUME(r) (4.0 / 3.0) * PI * (r * r * r)

int main(void)
{
	int r;
	
	printf("반지름 : ");
	scanf_s("%d", &r);

	printf(">> 반지름이 %d인 구의 부피 = %.2lf \n", r, VOLUME(r));

	system("pause");
	return 0;
}