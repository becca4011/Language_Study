#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num;

	printf("���ڸ� ������ �Է��ϼ���. : ");
	scanf_s("%d", &num);

	int n1 = num / 1000, n2 = num % 1000 / 100, n3 = num % 100 / 10, n4 = num % 10 / 1;

	printf("�Է��� ���� %dõ%d��%d��%d�Դϴ�. \n", n1, n2, n3, n4);

	system("pause");
	return 0;
}