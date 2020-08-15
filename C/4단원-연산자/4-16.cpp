#include <Windows.h>
#include <stdio.h>

int main(void)
{
	double height;
	double inch = 2.54, feet = 12 * inch;

	printf("키(cm)를 입력하세요. : ");
	scanf_s("%lf", &height);

	printf("입력하신 키 %.2lf센티미터는 %.2lf피트와 %.2lf인치에 해당됩니다. \n", height, height / feet, height / inch);

	system("pause");
	return 0;
}