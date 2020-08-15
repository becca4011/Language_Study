#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n = 123;

	printf("n = %d \n", n);
	printf("n = %5d \n", n);
	printf("n = %+5d \n", n);
	printf("n = %-5d \n", n);
	printf("n = %-+5d \n", n);

	system("pause");
	return 0;
}