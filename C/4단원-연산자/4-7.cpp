#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x;

	printf("���� �Է� >> ");
	scanf_s("%d", &x);

	(x % 2 == 0) ? printf("%d�� ¦���Դϴ�. \n", x) : printf("%d�� Ȧ���Դϴ�. \n", x);

	system("pause");
	return 0;
}