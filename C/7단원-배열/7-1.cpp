#include <Windows.h>
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int quiz[SIZE];
	int i, cnt, sum;
	double avg;

	printf("5���� ������ ������� �Է��ϼ���. \n\n");
	
	sum = 0;
	cnt = 0;
	avg = 0;
	for (i = 0; i < SIZE; i++)
	{
		printf("%d���� ���� ������? ", i + 1);
		scanf_s("%d", &quiz[i]);
		
		sum += quiz[i];
	}

	avg = (double)sum / SIZE;

	for (i = 0; i < SIZE; i++)
	{
		if (quiz[i] < avg)
		{
			cnt++;
		}
	}

	printf("================================== \n");
	printf("   ��ȣ    ����   ��հ��� ����    \n");
	printf("================================== \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("   %2d       %2d       %5.1lf \n", i + 1, quiz[i], quiz[i] - avg);
	}
	printf("================================== \n");
	printf("��� : %.1lf�� \n", avg);
	printf("================================== \n");
	printf("��� �̸� : %d�� \n", cnt);

	system("pause");
	return 0;
}