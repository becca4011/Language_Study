#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char m;
	double num = 0, result = 0;

	printf("�Է� ������ cm�̸� 'c'�� 'C'��, inch�̸� 'i'�� 'I'�� �Է��ϼ���. \n");
	printf("�Է� ���� : ");
	scanf_s("%c", &m);
	printf("�Է� �� : ");
	scanf_s("%lf", &num);

	switch (m)
	{
		case 'c':
		case 'C':
			result = num / 2.54;
			printf("\n�Է��� %.2lfcm�� %.2lfinch�Դϴ�. \n", num, result);
			break;
		case 'i':
		case 'I':
			result = num * 2.54;
			printf("\n�Է��� %.2lfinch�� %.2lfcm�Դϴ�. \n", num, result);
			break;
	}

	system("pause");
	return 0;
}