#include <Windows.h>
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int a, b, c = 0;

	printf("�� �� �Է� : ");
	scanf_s("%d %d", &a, &b);

	printf(">> %d %d \n", SWAP(b, c, a), SWAP(a, b, c));

	system("pause");
	return 0;
}