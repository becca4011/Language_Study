#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	(n1 > n2) ? (max = n1, min = n2) : (max = n2, min = n1);

	printf(">> ū �� / ���� �� = %d \n", max / min);
	printf(">> ū �� %% ���� �� = %d \n", max % min);

	system("pause");
	return 0;
}