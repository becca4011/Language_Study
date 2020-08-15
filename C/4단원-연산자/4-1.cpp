#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y;

	x = 1;

	printf("x의 값 : %d \n", x);
	printf("x + 1의 결과 : %d \n", x + 1);
	printf("y = x + 1의 결과 : %d \n", y = x + 1);
	printf("y = 1 + (x = 2 + 3)의 결과 : %d \n", y = 1 + (x = 2 + 3));
	printf("y = x = 5의 결과 : %d \n", y = x = 5);

	system("pause");
	return 0;
}