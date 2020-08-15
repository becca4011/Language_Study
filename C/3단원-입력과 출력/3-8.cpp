#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int r = 5;
	double length;

	printf("둘레를 구할 원의 반지름은? ");
	scanf_s("%d", &r);
	
	length = 2 * 3.14 * r;

	printf("반지름이 %d인 원의 둘레는 %.2lf \n", r, length);

	system("pause");
	return 0;
}