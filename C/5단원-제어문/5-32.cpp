#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num, cal;

	printf("�� �Է� : ");
	scanf_s("%d", &num);

	printf("����(1, 2, 3) : ");
	scanf_s("%d", &cal);

	printf("�Է��� �� %d�� ", num);
	switch (cal)
	{
		case 1: printf("1����� %d�Դϴ�. \n", num); break;
		case 2: printf("2����� %d�Դϴ�. \n", num * 2); break;
		case 3: printf("3����� %d�Դϴ�. \n", num * 3); break;
		default: printf("�߸��� �������Դϴ�. \n");
	}

	system("pause");
	return 0;
}