#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int month;

	printf("��(1~12) �Է� : ");
	scanf_s("%d", &month);

	printf(">> %d���� %s�Դϴ�. \n", month, (month > 6) ? "�Ϲݱ�" : "��ݱ�");

	system("pause");
	return 0;
}