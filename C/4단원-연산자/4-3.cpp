#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y;

	x = y = 5;

	printf("x = %d, y = %d \n", x, y);
	printf("x += y의 결과는 %d \n\n", x += y);

	printf("x = %d, y = %d \n", x, y);
	printf("x -= y의 결과는 %d \n\n", x -= y);

	printf("x = %d, y = %d \n", x, y);
	printf("x *= y의 결과는 %d \n\n", x *= y);

	printf("x = %d, y = %d \n", x, y);
	printf("x /= y의 결과는 %d \n\n", x /= y);

	printf("x = %d, y = %d \n", x, y);
	printf("x %%= y의 결과는 %d \n", x %= y);

	system("pause");
	return 0;
}