#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double radius, area, pi = 3.14;

	printf("�������� �Է��ϼ���. ");
	scanf_s("%lf", &radius);

	area = pi * radius * radius;

	printf("������ %.2lf�� ���� ������ %.2lf�Դϴ�. \n", radius, area);

	system("pause");
	return 0;
}