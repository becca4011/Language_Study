#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, sum;

	while (1) //���ѷ���
	{
		printf("���� n�� �Է�(���� : -1) : ");
		scanf_s("%d", &n);

		if (n == -1) //n�� -1�� �Է��ϸ� ������ Ż���Ͽ� 25�� ����
		{
			break;
		}

		sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("���� 1���� %d������ ���� %d�Դϴ�. \n\n", n, sum);
	}
	printf("���α׷��� �����ϴ�. \n");

	system("pause");
	return 0;
}