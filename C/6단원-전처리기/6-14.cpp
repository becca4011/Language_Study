#include <Windows.h>
#include <stdio.h>
#define NUMBER(x) printf("%6o %6d %6x \n", x, x, x)

int main(void)
{
	int n;

	printf("-------------------------\n");
	printf("   8���� 10���� 16���� \n");
	printf("-------------------------\n");

	for (n = 1; n <= 15; n++)
	{
		NUMBER(n);
	}
	printf("-------------------------\n");

	system("pause");
	return 0;
}