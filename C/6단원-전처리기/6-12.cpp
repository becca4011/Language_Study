#include <Windows.h>
#include <stdio.h>
#define MALE(x) ((x) == (1))
#define YES(x) ((x) == (1))

int main(void)
{
	int gender, married, army, plus, children;

	plus = 0;

	printf("���� (��:1, ��:2) ? ");
	scanf_s("%d", &gender);

	if (MALE(gender))
	{
		printf("�� ���� (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &army);

		if (YES(army))
		{
			plus++;

			printf("��ȥ (��:1, �ƴϿ�:2) ? ");
			scanf_s("%d", &married);

			if (YES(married))
			{
				plus++;
			}
		}
	}
	else
	{
		printf("��ȥ (��:1, �ƴϿ�:2) ? ");
		scanf_s("%d", &married);

		if (YES(married))
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