#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double height;
	double inch = 2.54, feet = 12 * inch;

	printf("Ű(cm)�� �Է��ϼ���. : ");
	scanf_s("%lf", &height);

	printf("�Է��Ͻ� Ű %.2lf��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�. \n", height, height / feet, height / inch);

	system("pause");
	return 0;
}