#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char c1;

	printf("���� �Է� : ");
	scanf_s("%c", &c1);

	if (c1 >= '0' && c1 <= '9')
	{
		printf("�����Դϴ�. \n");
	}
	else if (c1 >= 'a' && c1 <= 'z')
	{
		printf("���ĺ� �ҹ����Դϴ�. \n");
	}
	else if (c1 >= 'A' && c1 <= 'Z')
	{
		printf("���ĺ� �빮���Դϴ�. \n");
	}
	else
	{
		printf("�� ���� �����Դϴ�. \n");
	}

	system("pause");
	return 0;
}