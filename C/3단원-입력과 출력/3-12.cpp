#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double rad, n1, n2, n3;
	double pi = 3.141592;

	printf("������(cm)�� �Է��ϼ���. ");
	scanf_s("%lf", &rad);

	n1 = 2 * pi * rad;
	n2 = pi * rad * rad;
	n3 = (4.0 / 3.0) * pi * rad * rad * rad;

	printf("�ѷ�= %7.2lf cm \n", n1);
	printf("����= %7.2lf cm��\n", n2);
	printf("����= %7.2lf cm��\n", n3);

	system("pause");
	return 0;
}