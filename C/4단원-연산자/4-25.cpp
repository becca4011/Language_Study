#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n1;

	printf("정수 입력 : ");
	scanf_s("%d", &n1);

	printf("%d >> 3 = %d\n%d << 3 = %d \n", n1, n1 >> 3, n1, n1 << 3);

	system("pause");
	return 0;
}