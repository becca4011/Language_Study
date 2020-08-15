#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char m;
	double num = 0, result = 0;

	printf("입력 단위가 cm이면 'c'나 'C'를, inch이면 'i'나 'I'를 입력하세요. \n");
	printf("입력 단위 : ");
	scanf_s("%c", &m);
	printf("입력 값 : ");
	scanf_s("%lf", &num);

	switch (m)
	{
		case 'c':
		case 'C':
			result = num / 2.54;
			printf("\n입력한 %.2lfcm는 %.2lfinch입니다. \n", num, result);
			break;
		case 'i':
		case 'I':
			result = num * 2.54;
			printf("\n입력한 %.2lfinch는 %.2lfcm입니다. \n", num, result);
			break;
	}

	system("pause");
	return 0;
}