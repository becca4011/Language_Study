#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int num, cal;

	printf("수 입력 : ");
	scanf_s("%d", &num);

	printf("계산법(1, 2, 3) : ");
	scanf_s("%d", &cal);

	printf("입력한 수 %d의 ", num);
	switch (cal)
	{
		case 1: printf("1배수는 %d입니다. \n", num); break;
		case 2: printf("2배수는 %d입니다. \n", num * 2); break;
		case 3: printf("3배수는 %d입니다. \n", num * 3); break;
		default: printf("잘못된 연산자입니다. \n");
	}

	system("pause");
	return 0;
}