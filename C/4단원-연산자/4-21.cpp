#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int sec;

	printf("초(sec)입력 : ");
	scanf_s("%d", &sec);

	printf("입력하신 %d초는 ", sec);

	int hour = sec / 3600;
	sec = sec % 3600;
	int min = sec / 60, second = sec % 60;

	printf("%d시간 %d분 %d초입니다. \n", hour, min, second);

	system("pause");
	return 0;
}