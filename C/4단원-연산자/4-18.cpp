#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double rad, height, pi = 3.141592;

	printf("������� �ظ��� ������, ���̸� �Է��ϼ���(cm����) : ");
	scanf_s("%lf, %lf", &rad, &height);

	double V = pi * rad * rad * height;

	printf(">> ����� ������� ���Ǵ� %.1lfcm���Դϴ�. \n", V);

	system("pause");
	return 0;
}