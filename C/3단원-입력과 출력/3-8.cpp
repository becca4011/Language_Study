#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int r = 5;
	double length;

	printf("�ѷ��� ���� ���� ��������? ");
	scanf_s("%d", &r);
	
	length = 2 * 3.14 * r;

	printf("�������� %d�� ���� �ѷ��� %.2lf \n", r, length);

	system("pause");
	return 0;
}