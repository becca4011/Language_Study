#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double width, height, avg;

	printf("�غ�, ����: ");
	scanf_s("%lf %lf", &width, &height);

	avg = (width * height) / 2.0;

	printf("�غ� %.2lfcm, ����: %.2lfcm�� �ﰢ���� ����=%.2lfcm��\n", width, height, avg);

	system("pause");
	return 0;
}