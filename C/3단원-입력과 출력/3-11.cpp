#include <Windows.h>
#include <stdio.h>

int main(void)
{
	char eng;

	printf("���ڸ� �Է��ϼ���.: ");
	scanf_s("%c", &eng);

	printf("%c�� ASCII�ڵ� ���� %d�Դϴ�. \n", eng, eng);

	system("pause");
	return 0;
}