#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &num);

	printf("�Է��� �� %d��(��) ", num);

	if (num > 0)
	{
		if (num % 2 == 0)
		{
			printf("���� ¦���Դϴ�. \n");
		}
		else
		{
			printf("���� Ȧ���Դϴ�. \n");
		}
	}
	else
	{
		if (num % 2 == 0)
		{
			printf("���� ¦���Դϴ�. \n");
		}
		else
		{
			printf("���� Ȧ���Դϴ�. \n");
		}
	}

	system("pause");
	return 0;
}