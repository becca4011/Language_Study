#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;

	printf("���� n�� �Է� : ");
	scanf_s("%d", &n);

	i = 0;
	while (i <= n)
	{
		i++;

		if (i % 2 == 1) //i���� Ȧ����
		{
			continue; //20���� �������� �ʰ� 12������ �̵��Ͽ� �ٽ� ���ǽ��� ����
		}
		sum += i;
	}

	printf("���� 1���� %d ���� ¦������ ���� %d�Դϴ�. \n", n, sum);

	system("pause");
	return 0;
}