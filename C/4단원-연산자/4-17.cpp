#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double kg, lb = 0.45359237;

	printf("kg������ ���Ը� �Է��ϼ���. : ");
	scanf_s("%lf", &kg);

	printf("�Է��Ͻ� ���� %.1lfkg�� %.1lflb�� �ش��մϴ�. \n", kg, kg / lb);

	system("pause");
	return 0;
}