#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int age;
	char gender;
	double height;

	printf("성별은? (남자라면 M, 여자라면 F) ");
	scanf_s("%c", &gender);

	printf("나이는? ");
	scanf_s("%d", &age);

	printf("키는? ");
	scanf_s("%lf", &height);

	printf("\n=====================\n");
	printf("성별: %c \n나이: %d세 \n키: %.1lf \n", gender, age, height);

	system("pause");
	return 0;
}