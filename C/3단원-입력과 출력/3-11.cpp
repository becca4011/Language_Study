#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char eng;

	printf("문자를 입력하세요.: ");
	scanf_s("%c", &eng);

	printf("%c의 ASCII코드 값은 %d입니다. \n", eng, eng);

	system("pause");
	return 0;
}