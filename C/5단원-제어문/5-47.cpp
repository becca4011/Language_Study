#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, n1, n2, sum;

	printf("�Ǻ���ġ ���� �Է� : ");
	scanf_s("%d", &n);

	printf("\n*** �Ǻ���ġ ���� ***\n");

	sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			n1 = 0;
			n2 = 1;
			printf("%d, ", i);
		}
		else
		{
			sum = n1 + n2;
			printf("%d, ", sum);
			/* �Ǻ���ġ ���� ���� �� ���� ��(n2�� ���� sum�� = ���� �Ǻ���ġ ���� n1�� n2�� ��) */
			n1 = n2;
			n2 = sum;
		}
	}
	printf("\b\b�Դϴ�. \n");
	system("pause");
	return 0;
}