#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int temp;

	printf("���� �µ���? ");
	scanf_s("%d", &temp);

	if (temp < 0)
	{
		printf("������ �����̸� ");
	}

	printf("���� �µ��� %d���Դϴ�. \n", temp);

	system("pause");
	return 0;
}