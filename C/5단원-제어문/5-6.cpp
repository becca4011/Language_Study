#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int gender, married, army, plus, children;

	plus = 0;

	printf("���� (��:1, ��:2) ? ");
	scanf_s("%d", &gender);

	if (gender == 1)
	{
		printf("�� ���� (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &army);

		if (army == 1)
		{
			plus++;

			printf("��ȥ (��:1, �ƴϿ�:2) ? ");
			scanf_s("%d", &married);

			if (married == 1)
			{
				plus++;
			}
		}
	}
	else
	{
		printf("��ȥ (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &married);

		if (married == 1)
		{
			plus++;

			printf("�ڳ����? ");
			scanf_s("%d", &children);

			if (children == 1)
			{
				plus++;
			}
			else if (children >= 2)
			{
				plus += 2;
			}
		}
	}

	printf("\n>> �� �������� %d���Դϴ�. \n", plus);

	system("pause");
	return 0;
}