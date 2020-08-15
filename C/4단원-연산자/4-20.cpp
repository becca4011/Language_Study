#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n1;

	printf("ют╥б(Gigabyte) : ");
	scanf_s("%d", &n1);

	int n2 = n1 * 1024, n3 = n2 * 1024;

	printf(">> %dGigabyte = %dMegabyte = %dKillobyte \n", n1, n2, n3);

	system("pause");
	return 0;
}