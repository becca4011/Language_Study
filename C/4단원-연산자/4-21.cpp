#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int sec;

	printf("��(sec)�Է� : ");
	scanf_s("%d", &sec);

	printf("�Է��Ͻ� %d�ʴ� ", sec);

	int hour = sec / 3600;
	sec = sec % 3600;
	int min = sec / 60, second = sec % 60;

	printf("%d�ð� %d�� %d���Դϴ�. \n", hour, min, second);

	system("pause");
	return 0;
}