#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�� ������ �Է��ϼ���. >> ");
	scanf_s("%d %d", &x, &y);

	printf("(%d > %d)�� ����� %d�Դϴ�. \n", x, y, x > y);
	printf("(%d < %d)�� ����� %d�Դϴ�. \n", x, y, x < y);
	printf("(%d >= %d)�� ����� %d�Դϴ�. \n", x, y, x >= y);
	printf("(%d <= %d)�� ����� %d�Դϴ�. \n", x, y, x <= y);
	printf("(%d == %d)�� ����� %d�Դϴ�. \n", x, y, x == y);
	printf("(%d != %d)�� ����� %d�Դϴ�. \n", x, y, x != y);

	system("pause");
	return 0;
}