#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int harf = 14; //���� �ݰ���
	int days, n;
	double amount = 100; //���� ��

	printf("���� ���� ���� %.1lfmg�Դϴ�. \n\n", amount);
	
	printf("��ĥ° �Ǵ� ���� ���� �ּ� �ܷ��� ���ұ��? ");
	scanf_s("%d", &n);

	days = 0;
	while (1)
	{
		days += harf;
		amount /= 2;
		printf("%2d�ϱ����� ���� �ּ� �ܷ��� %6.1lfmg �̻� \n", days, amount);

		if (days >= n)
		{
			break;
		}
	}
	printf("\n>> �׷��Ƿ� %2d�� °���� �ּ� %6.1lfmg �̻� �����ֽ��ϴ�. \n", n, amount);

	system("pause");
	return 0;
}