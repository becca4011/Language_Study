#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	int avg;
	int sum;

	printf("������ �ϰ� ���� �� ���� ������? ");
	scanf_s("%d %d", &n1, &n2);
	
	avg = n1 * n2;
	printf("���� ���: %d\n\n", avg);

	printf("������ �ϰ� ���� �� ���� ������? ");
	scanf_s("%d %d", &n3, &n4);

	sum = n3 + n4;
	printf("���� ���: %d\n", sum);

	system("pause");
	return 0;
}