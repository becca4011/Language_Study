#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double F, C;

	printf("ȭ���µ�(F)�� �Է��ϼ���. ");
	scanf_s("%lf", &F);

	C = (5.0 / 9.0) * (F - 32);

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�. \n", F, C);

	system("pause");
	return 0;
}