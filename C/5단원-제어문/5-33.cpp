#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, cnt;

	printf("���� ���� n : ");
	scanf_s("%d", &n);

	cnt = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
		}
	}

	if (cnt != 0 || n == 1)
	{
		printf(">> %d��(��) �Ҽ��� �ƴմϴ�. \n", n);
	}
	else
	{
		printf(">> %d��(��) �Ҽ��Դϴ�. \n", n);
	}

	system("pause");
	return 0;
}