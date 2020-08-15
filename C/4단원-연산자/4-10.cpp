#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x = 5, y = 12;

	printf("%d & %d = %d \n", x, y, x & y); // AND
	printf("%d | %d = %d \n", x, y, x | y); // OR
	printf("%d ^ %d = %d \n", x, y, x ^ y); // XOR
	printf("~%d = %d \n", x, ~x); // NOT

	system("pause");
	return 0;
}